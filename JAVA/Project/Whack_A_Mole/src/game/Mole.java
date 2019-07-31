package game;

import java.awt.*;
import java.util.*;
import javax.swing.*;

public class Mole extends JButton
{
	private static final int MIN_LIFE = 50;  
	private static final int MAX_LIFE = 300;  
	static Random rand = new Random();
	
	private boolean isAlive; //Mole is alive or not 
	private int life_count;  //shows how long the mole has currently been alive 
	private int final_life; // stores final life time
	
	public Mole() 
	{
		isAlive = false;  
		Icon img1 = new ImageIcon("Images//BG.jpg");
		this.setIcon(img1);
		life_count = 0; 
	}
	
	public boolean getIsAlive() 
	{
		return isAlive; 
	}
	
	public void revive() 
	{
		if(!isAlive) 
		{
			final_life = MIN_LIFE + rand.nextInt(MAX_LIFE - MIN_LIFE + 1); //set final life 
			isAlive = true;
			//ImageIcon mole = new ImageIcon("Images//mole1.png");
			Icon img = new ImageIcon("Images//molef.jpg");
			//this.setBackground(Color.GREEN);
			this.setIcon(img);
		}
	}
	
	public void kill() 
	{
		isAlive = false;
		//this.setBackground(Color.RED);
		Icon img1 = new ImageIcon("Images//BG.jpg");
		this.setIcon(img1);
		life_count = 0; 
		Game.creaturesAlive--; 
	}
	
	//Updates Mole's Status
	public void update() 
	{
		if(isAlive) 
		{
			life_count++; 
			
			//if life_count is equal to max_life kill the mole 
			if(life_count == final_life) 
				this.kill();
		}
	}
}
