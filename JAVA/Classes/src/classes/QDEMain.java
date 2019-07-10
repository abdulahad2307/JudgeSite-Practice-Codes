package classes;

import java.util.Scanner;

public class QDEMain {

	public static void main(String[] args) 
	{	
		Scanner input = new Scanner(System.in);
		
		int a = input.nextInt();
		int b = input.nextInt();
		int c = input.nextInt();
		
		QuadreticEquation qe1 = new QuadreticEquation(a,b,c);
		
		if(qe1.getDiscriminant(a, b, c)> 0)
		{
			System.out.println("Root 1 = " + qe1.getRoot1() + " Root 2 = " +qe1.getRoot2());
		}
		else if (qe1.getDiscriminant(a, b, c) == 0)
		{
			System.out.println("Root 1 = " + qe1.getRoot1());
		}
		else
			System.out.println("The Equation has no roots");
		
		

	}

}
