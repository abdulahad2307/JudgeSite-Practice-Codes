package lab11;

public class Circle extends Shape 
{
	protected double radius;
	public Circle() {
	}
	

	public Circle(double radius) {
		this.radius = radius;
	}


	public Circle(double radius,String color, boolean filled) {
		super(color, filled);
		this.radius = radius;
	}

	@Override
	public double getArea() {
		
		return 3.1412*radius*radius;
	}

	@Override
	public double getPerimeter() {
		
		return 2*3.1412*radius;
	}


	@Override
	public String toString() {
		return "Circle [radius=" + radius + ", color=" + color + ", filled=" + filled + ", Area()=" + getArea()
				+ ", Perimeter()=" + getPerimeter() + "]";
	}
	
	
	
	

}
