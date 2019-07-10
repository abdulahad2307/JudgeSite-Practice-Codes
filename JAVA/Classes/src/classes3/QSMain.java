package classes3;

import java.util.Scanner;

public class QSMain {

	public static void main(String[] args) 
	{
		
		Scanner input = new Scanner (System.in);
		
		QuizScript q[] = new QuizScript[3];
		
		for (int i = 0 ; i< 3 ; i++)
		{
			String name = input.nextLine();
			int id = input.nextInt();
			int total = input.nextInt();
			double mark = input.nextDouble();
			
			q[i] = new QuizScript(name,id);
			q[i].setTotal(total);
			q[i].setMark(mark);
		}
		
		System.out.println("Highets mark gainer : " +Highest(q));
		System.out.println("Total Passed Students : " +Passed(q));
		System.out.println("Average : " +Average(q));

	}
	
	public static String Highest(QuizScript[] arr)
	{
		double hm = arr[0].getMark();
		int flag = 0;
		
		for (int i = 1 ; i < 3 ; i++)
		{
			if(hm < arr[i].getMark())
			{
				hm = arr[i].getMark();
				flag = i ;
			}
		}
		
		return arr[flag].getName();
		
	}
	
	public static int Passed(QuizScript[] arr)
	{
		int count = 0 ;
		
		for (int i = 0 ; i < 3 ; i++)
		{
			if(arr[i].getMark()> 60)
				count ++ ;
		}
		
		return count;
		
	}
	
	
	public static double Average(QuizScript[] arr)
	{
		double avg = 0, total = 0;
		
		
		for (int i = 0 ; i <3 ; i++)
		{
			total = total + arr[i].getMark();
			
			avg = total / 3 ;
		}
		
		
		return avg;
	}
	

}
