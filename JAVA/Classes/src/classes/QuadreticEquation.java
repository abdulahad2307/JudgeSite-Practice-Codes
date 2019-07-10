package classes;

public class QuadreticEquation 
{
	private int a , b, c ;
	
	public QuadreticEquation(int a , int b, int c)
	{
		this.a = a ;
		this.b = b ;
		this.c = c ;
	}
	
	public int getA() {
		return a;
	}

	public int getB() {
		return b;
	}

	public int getC() {
		return c;
	}
	
	public int getDiscriminant(int a, int b, int c)
	{
		
		return b*b - 4*a*c;
		
	}
	
	public double getRoot1()
	{
		double r1;
		
		r1 = (-b+Math.sqrt(getDiscriminant(a,b,c)))/2*a;
		
		return r1;
	}
	
	public double getRoot2()
	{
		double r2;
		
		r2 = (-b-Math.sqrt(getDiscriminant(a,b,c)))/2*a;
		
		return r2;
	}
}
