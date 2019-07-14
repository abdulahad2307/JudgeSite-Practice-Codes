package inh;

public class Main {

	public static void main(String[] args) 
	{
		Rectangle r1 = new Rectangle("BLUE", true, 10,5);
		System.out.println(r1.toString());
		
		Circle c1 = new Circle("Green", false, 13);
		System.out.println(c1.toString());
	}

}
