package classes2;

public class FanMain {

	public static void main(String[] args) 
	{
		Fan f1 = new Fan(3, true, 10, "Yellow");
		Fan f2 = new Fan(2, false, 5, "BLUE");
		
		System.out.println(f1.toString());
		
		System.out.println(f2.toString());

	}

}
