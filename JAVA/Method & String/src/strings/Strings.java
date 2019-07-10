package strings;

public class Strings {

	public static void main(String[] args) 
	{
		char[] charArr = {'J','a','v','a'};
		System.out.println(charArr);
		
		String str1 = "I LOVE C++ !";
		System.out.println(str1);
		
		String str2 = "I LOVE Python!";
		System.out.println(str2);
		
		String str = "Pytorch is Good";
		
		System.out.println("Length: " +str.length());
		System.out.println("Substring: " +str.substring(2,7));
		System.out.println("Char Position: " +str.charAt(2));
		System.out.println(String.format("%s and awsome", str));
		System.out.println("EMPTY ? : " +str.isEmpty());
		System.out.println("Contains ?:  " +str.contains("Good"));
		System.out.println("LowarCase: " +str.toLowerCase());
		System.out.println("UpperCase: " +str.toUpperCase());
		System.out.println(str.concat("for research"));
		
		String s1 = "Sample";
		
		if(s1.equals("Sample"))
			System.out.println("Matched");
		else
			System.out.println("NOT MATCHED");
		
		String s2 = "    It Removes leading and trailing spaces   ";
		System.out.println(s2.trim());
		
	}

}
