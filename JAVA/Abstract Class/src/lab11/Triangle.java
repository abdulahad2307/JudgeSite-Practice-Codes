package lab11;

public class Triangle extends Shape {
	
	private double A, B, C;
	public Triangle() {
		
	}
	
	


	public Triangle(double A, double B, double C) {
		this.A = A;
		this.B =B;
		this.C = C;
	}




	public Triangle(String color, boolean filled, double A, double B, double C) {
		super(color, filled);
		this.A = A;
		this.B =B;
		this.C = C;
		
	}
	
	

	public double getA() {
		return A;
	}




	public void setA(double A) {
		A = A;
	}




	public double getB() {
		return B;
	}




	public void setB(double B) {
		B = B;
	}




	public double getC() {
		return C;
	}




	public void setC(double C) {
		C = C;
	}




	@Override
	public double getArea() {
		
		double p = (A+B+C)/2;
		return Math.sqrt(p*(p-A)*(p-B)*(p-C));
	}

	@Override
	public double getPerimeter() {
		
		return A+B+C;
	}




	@Override
	public String toString() {
		return "Triangle [A=" + A + ", B=" + B + ", C=" + C + ", color=" + color + ", filled=" + filled + ", Area="
				+ getArea() + ", Perimeter=" + getPerimeter() + "]";
	}
	
	

}
