package trycatch;

import java.util.InputMismatchException;
import java.util.Scanner;

public class NumberInput {

	public static void main(String[] args) 
	{
		Scanner input = new Scanner (System.in);
	
		int x = 1 , sum = 0 ;
		
		while(x<=10 )
		{
			int num1 = input.nextInt();
			try 
			{
				if (num1 > 0)
				{
					sum = sum + num1;
					x++;
				}

					
			}catch(InputMismatchException e ){
				System.out.println("Not a Positive Number , Input Positive number");
			}
			finally {
				if (x > 10)
					System.out.println("SUM = " + sum);
			}
		}

	}

}
