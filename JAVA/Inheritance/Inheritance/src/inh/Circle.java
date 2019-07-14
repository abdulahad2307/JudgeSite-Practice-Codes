package inh;

public class Circle extends Shape
{
	private double radius;

	public Circle()
	{
		
	}
	
	public Circle (String clr , boolean fill , double radius)
	{
		super(clr,fill);
		this.radius = radius;
	}
	
	
	public double getRadius() {
		return radius;
	}

	public void setRadius(double radius) {
		this.radius = radius;
	}
	
	public double getArea()
	{
		return Math.PI*radius*radius;
	}
	
	public double getCircum()
	{
		return 2*Math.PI*radius;
	}

	@Override
	public String toString() {
		return "Circle [radius=" + radius + ", getArea()=" + getArea() + ", getCircum()=" + getCircum()
				+ " "+ super.toString() + "]";
	}
	
	
}
