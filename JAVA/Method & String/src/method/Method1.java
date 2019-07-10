package method;

public class Method1 {

	public static void main(String[] args) 
	{
		int x = 40 , y = 20;
		maxPrint(x,y);
		
		int m = max(x,y);
		System.out.println("Max: " + m);

	}
	
	public static void maxPrint(int n1 , int n2)
	{
		if (n1 > n2)
			System.out.println("Max: " + n1);
		else
			System.out.println("Max: " + n2);
			
	}
	
	public static int max(int n1 , int n2)
	{
		if (n1 > n2)
			return n1;
		else
			return n2;
			
	}
	
	

}
