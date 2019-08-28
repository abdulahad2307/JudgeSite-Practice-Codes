package game;

import javax.swing.*;
import java.awt.*; 
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.io.*;
import java.nio.file.Files;
import java.nio.file.Paths;
import java.text.NumberFormat;
import java.util.*;

public class GamePlay extends JFrame implements ActionListener
{
	private static final int MAX_MOLES = 4; // max number of active moles 
	private static final double LENGTH_OF_GAME = .25*60000; // game length in milliseconds
	private static final int TARGET_SCORE = 130; //Maximum Target
	private static final int MAX_LEVEL = 2; // Max Level
	private static final int MOLE_PER_LEVEL = 6; // Moles per level  
	private static Random rand = new Random(); 
	private static  int numOfMoles = 6;  
	private static int level = 1; //counts the level 
	static int score;
	static int finalScore;
	static JLabel scoreLabel; //displays the score of the game
	static JLabel timeLabel; //displays the time left in the game
	public static int molesAlive; //stores the number of creatures that are currently alive
	
	Mole[] moles;
	
	public static void main(String[] args) throws Exception 
	{
		GamePlay this_game = new GamePlay();
		String welcome = readFileAsString("Welcome.txt");
		JOptionPane.showMessageDialog(this_game, welcome);
		
		LeaderBoard[] lb = new LeaderBoard[5];
		
		int count = 0;
		
		File file = new File("LeaderBoard.txt");
		
		try(
			Scanner input = new Scanner(file);
		) {
			while(input.hasNext()) {
				String name = input.next();
				int totalscore = input.nextInt();
	
				lb[count] = new LeaderBoard(name,totalscore);
				System.out.println(lb[count].toString());
				count++;
			}
		}
		
		//Arrays.sort(lb);
		
		for (int i = 0; i <lb.length; i++) {
			   System.out.println(lb[i]);
		}
		
		//loop to play the continuously
		while(true) {
			
			while(level <= MAX_LEVEL) {
				
				JOptionPane.showMessageDialog(this_game, "Level " + level + "\n Number of Moles: " + numOfMoles + "\n Press OK to begin level.");
				
				this_game.playGame(); // Play 
				
				finalScore = finalScore+score;
				if(score < TARGET_SCORE) {
					JOptionPane.showMessageDialog(this_game, "Level " + level + " Score: " + score + "\n Did not get to " + TARGET_SCORE + " points.  Game Over\n" + "Total Score" + finalScore);
					break; 
					}
			
				nextLevel();
				
				// Next Level
				if(level <= MAX_LEVEL) 
				{
					this_game.dispose();
					this_game = new GamePlay();
				}   	
			}
			
			if(level > MAX_LEVEL)
			{
				int lowestIndex = lb.length - 1;
				int lowestHScore = lb[lowestIndex].getTotalscore();
				System.out.println(lowestHScore);
				if (finalScore > lowestHScore)
				{
					JOptionPane.showMessageDialog(this_game, "Congratulations, you have won the game!\n" + "Total Score:" + finalScore);
					String newhName = JOptionPane.showInputDialog("Input Your Name");
					
					PrintWriter output = new PrintWriter(file);
					lb[lowestIndex].setTotalscore(finalScore);
					lb[lowestIndex].setName(newhName);
					
					Arrays.sort(lb,Comparator.comparing(LeaderBoard::getTotalscore).reversed());
					for (int i = 0 ; i < lb.length ; i++)
					{
							output.println(lb[i].toString());
					}
					
					output.close();
				}
				else
				{
					JOptionPane.showMessageDialog(this_game, "Congratulations, you have won the game!\n" + "Total Score:" + finalScore+"\n" + "But Not beaten High Score!!! :-( :-( :-(");
				}
				
				
			}
				
			 
			int response = JOptionPane.showConfirmDialog(this_game, "Thank you for playing!\n Do you want to play again?", "Play Again?", JOptionPane.YES_NO_OPTION, JOptionPane.QUESTION_MESSAGE);
			
			//Exit_option
			if (response == JOptionPane.NO_OPTION || response == JOptionPane.CLOSED_OPTION) 
				break; 
			
			resetLevel(); 
			this_game.dispose();
			this_game = new GamePlay();
		
		}
		
		//dispose of game
		this_game.dispose(); 

	}
	
	public static void update_time(double timeRemaining) 
	{
		timeLabel.setFont(new Font("BOLD", Font.PLAIN, 50));
		timeLabel.setText("" + NumberFormat.getInstance().format(timeRemaining/1000));
		timeLabel.setForeground(Color.RED);
		 		
	}
	
	public static void update_score() 
	{
			score += 10; 
			scoreLabel.setFont(new Font("BOLD", Font.PLAIN, 50));
			scoreLabel.setText("" + score);
			scoreLabel.setForeground(Color.GREEN);
	}
	
	public GamePlay() {
		//set JFrames size, layout, close operation, and title 
		setSize(700, 600); 
		setLayout(new BorderLayout()); 
		this.setDefaultCloseOperation(EXIT_ON_CLOSE);
		this.setTitle("Whack_A_Mole"); 
		
		score = 0; 
		molesAlive = 0; 
		
		
		JPanel top = intitialize_top(); 
		add(top, BorderLayout.NORTH);
		 
		JPanel field = intitialize_field(); 
		add(field, BorderLayout.CENTER);
		
		this.setVisible(true); 
		
		
	}
	
	private JPanel intitialize_field() 
	{
		//create field panel and set up grid layout 
		JPanel field = new JPanel(); 
		field.setLayout(new GridLayout(4,4, 5, 5)); 
		//Initialize moles array 
		moles = new Mole[numOfMoles]; 
		for(int x = 0; x < moles.length; x++) {
			moles[x] = new Mole();
			moles[x].addActionListener(this); 
			field.add(moles[x]); 	
		}
		return field; 
		
	}
	
	private JPanel intitialize_top() 
	{ 
		
		JPanel top = new JPanel(); 
		top.setLayout(new GridLayout(1,2)); 
		
		scoreLabel = new JLabel(); 
		timeLabel = new JLabel(); 
		Icon score = new ImageIcon("Images//score.png");
		scoreLabel.setIcon(score);
		Icon life = new ImageIcon("Images//life.png");
		timeLabel.setIcon(life);
		top.add(scoreLabel); 
		top.add(timeLabel); 
		
		return top; 
	}
	
	private void playGame() {
		double startTime = new Date().getTime(); //stores the start of the game   
		double currentTime = startTime; //stores the current time // each frame is rendered to allow comparison to start time 
		double timeRemaining = LENGTH_OF_GAME; //stores the time left in the game   
		
		//play game until the length of the game as been reached  
		while(( LENGTH_OF_GAME - timeRemaining) < LENGTH_OF_GAME) {
			
			// Measure the current time in an effort to keep up a consistent
			// frame rate
			long time = System.currentTimeMillis();
			
			reviveCreatures(); 
			updateCreatures(); 
			
			try{
				long delay = Math.max(0, 32-(System.currentTimeMillis()-time));
				
				Thread.sleep(delay);
				}
			catch(InterruptedException e)
			{
					
			}
			
			//update time variable  
			currentTime = new Date().getTime(); 
			
			//remaining time 
			timeRemaining = LENGTH_OF_GAME - (currentTime - startTime);
			
			//update time label 
			update_time(timeRemaining); 
			
			
		}
		
	}
	
	private void updateCreatures() 
	{
		for(int x = 0; x < moles.length; x++)
			moles[x].update(); 
	}
	
	private void reviveCreatures() 
	{
		if (molesAlive < MAX_MOLES) 
		{
			int randomCreature = rand.nextInt(numOfMoles); 
			//if mole is not alive revive it 
			if(!moles[randomCreature].getIsAlive()) {
				moles[randomCreature].revive(); 
				molesAlive++; 
			}
		}
	}
	
	//Level Update
	private static void nextLevel() 
	{
		level++; 
		if (level == 3)
			numOfMoles = 16;
		else
			numOfMoles = MOLE_PER_LEVEL * level; 
	}
	
	//Reset Level
	private static void resetLevel() 
	{
		level = 1; 
		numOfMoles = MOLE_PER_LEVEL; 
	}
	
	public void actionPerformed(ActionEvent event) 
	{
		Mole clickedCreature = (Mole) event.getSource();
		if(clickedCreature.getIsAlive()) 
		{
			clickedCreature.kill();
			update_score(); 
		}
		
	}
	
	public static String readFileAsString(String fileName)throws Exception 
	{ 
	    String data = ""; 
	    data = new String(Files.readAllBytes(Paths.get(fileName))); 
	    return data; 
	}
	
	

}
