package method;

import java.util.Scanner;

public class Task2 {

	public static void main(String[] args) 
	{

		Scanner Input = new Scanner(System.in);
		
		int n = Input.nextInt();
		
		long SUM = sumDigits(n);
		System.out.println("SUM: " + SUM);

	}
	
	public static long sumDigits(long n)
	{
		long a= 0;
		while (n !=0)
		{
			long x = n%10;
			a = a + x;
			n = n/10;
		}
		return a;
	}

}
