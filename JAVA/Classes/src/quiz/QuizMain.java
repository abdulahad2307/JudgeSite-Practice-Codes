package quiz;

import java.io.ObjectInputStream.GetField;

public class QuizMain {

	public static void main(String[] args) 
	{
		MyPoint m1 = new MyPoint(4, 2);
		
		System.out.println("X = "+ m1.getX() + " Y = " + m1.getY() +"\nTo String: " + m1.toString() + "\nDistance: " +m1.distance() + "\nDIS 0 :" + m1.distance(7, 9));
		
		
		System.out.println("\n\n\n");
		
		MyPoint m2 = new MyPoint();
		
		System.out.println("X = "+ m2.getX() + " Y = " + m2.getY() +"\nTo String: " + m2.toString() + "\nDistance: " +m2.distance() + "\nDIS 0 :" + m2.distance(7, 9));
		
		System.out.println("\n\n\n");
		
		System.out.println("Another : "  + m2.distance(m1));

	}
	

}
