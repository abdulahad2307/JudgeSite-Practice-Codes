package strings;

import java.util.Scanner;

public class Task4 {

	public static void main(String[] args) 
	{
		
		Scanner Input = new Scanner(System.in);
		
		String s = Input.nextLine();
		
		if(isPalindrome(s) == true)
			System.out.println("Palindrome!");
		else
			System.out.println("NOT Palindrome!");
			
	}
	
	public static boolean isPalindrome(String s)
	{
		String reverse = new StringBuffer(s).reverse().toString();
		
		if (s.matches(reverse))
			return true;
		else
			return false;
		
	}

}
