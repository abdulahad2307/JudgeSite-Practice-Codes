package classes2;

public class Fan 
{
	int SLOW =1 ;
	int MEDIUM = 2 ;
	int FAST = 3 ;
	
	private int speed;
	private boolean on;
	private double radius;
	
	public String color ;
	
	public Fan()
	{
		speed = SLOW;
		on = false;
		radius = 5;
		color = "Blue";
	}
	
	public Fan(int speed, boolean on , double radius, String color)
	{
		this.speed = speed;
		this.on = on;
		this.radius = radius;
		this.color = color;
	}
	
	
	public int getSpeed() {
		return speed;
	}

	public void setSpeed(int speed) {
		this.speed = speed;
	}

	public boolean isOn() {
		return on;
	}

	public void setOn(boolean on) {
		this.on = on;
	}

	public double getRadius() {
		return radius;
	}

	public void setRadius(double radius) {
		this.radius = radius;
	}

	public String getColor() {
		return color;
	}

	public void setColor(String color) {
		this.color = color;
	}
	
	public String toString()
	{
		String s ;
		
		if(on == false)
			s = "Color = "  +getColor() + " Radius = " + getRadius() + " fan is off";
		else
			s = "Fan Speed = " +getSpeed() + " Color = "  +getColor() + " Radius = " + getRadius() ;
		
		
		return s ;
	}
	

	
	

	
	
}
