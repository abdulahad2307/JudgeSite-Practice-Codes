package strings;

import java.util.Scanner;

public class Task3 {

	public static void main(String[] args) 
	{
		Scanner Input = new Scanner(System.in);
		
		String s = Input.nextLine();
		
		int count = countVowels(s.toLowerCase());
		System.out.println("Total no of Vowels= " +count);
	}
	
	public static int countVowels(String s)
	{
		int count = 0 ;
		for (int i = 0 ; i< s.length(); i++)
		{
			char c = s.charAt(i);
			if( c == 'a')
				count++;
			else if (c == 'e')
				count++;
			else if (c == 'i')
				count++;
			else if (c == 'o')
				count++;
			else if (c == 'u')
				count++;
				
		}
		
		return count;
	}

}
