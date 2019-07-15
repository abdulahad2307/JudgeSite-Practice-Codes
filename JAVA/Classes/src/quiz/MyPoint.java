package quiz;

public class MyPoint 
{
	private int x , y ;
	
	public MyPoint()
	{
		x = 0;
		y = 0;
	}
	
	public MyPoint(int x , int y)
	{
		this.x = x ;
		this.y = y ;
	}

	public int getX() {
		return x;
	}

	public void setX(int x) {
		this.x = x;
	}

	public int getY() {
		return y;
	}

	public void setY(int y) {
		this.y = y;
	}
	
	public int getXY( int [] xy)
	{
		return getXY(xy);
	}
	
	public void setXY(int x, int y)
	{
		this.x = x ;
		this.y = y ;
		
	}
	
	public String toString() {
		return "MyPoint [x=" + x + ", y=" + y + "]";
	}

	public double distance (int x , int y )
	{
		return Math.sqrt((x-this.x) * (x-this.x) + (y-this.y)*(y-this.y));
	}
	
	public double distance (MyPoint another)
	{
		return another.distance(x, y);
	}
	
	public double distance ()
	{
		return distance(0,0);
	}
	
	
	
	
	
}
