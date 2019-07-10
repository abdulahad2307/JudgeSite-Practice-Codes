package method;
import java.util.Scanner;
public class Task1 {

	public static void main(String[] args) 
	{
		Scanner Input = new Scanner(System.in);
		
		int a = Input.nextInt();
		int b = Input.nextInt();
		int c = Input.nextInt();
		
		int MAX = max(a,b,c);
		System.out.println("Max: " + MAX);

	}
	
	public static int max(int n1 , int n2)
	{
		if (n1 > n2)
			return n1;
		else
			return n2;
			
	}
	
	public static int max(int n1,int n2,int n3)
	{
		int MAX = 0;
		if (n1 > n2)
		{
			if(n1>n3)
				MAX = n1;
		}
		else
		{
			if (n2 > n3)
				MAX = n2;
			else
				MAX = n3;
		}
		return MAX;
		
			
	}

}
