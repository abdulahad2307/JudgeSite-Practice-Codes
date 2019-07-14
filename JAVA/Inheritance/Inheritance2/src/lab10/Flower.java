package lab10;

public class Flower extends Plant 
{
	private boolean hasSmell;
	private boolean hasThorn;
	
	public Flower(String name, String color, boolean hasSmell, boolean hasThorn) {
		super(name, color);
		this.hasSmell = hasSmell;
		this.hasThorn = hasThorn;
		
	}

	public boolean isHasSmell() {
		return hasSmell;
	}

	public void setHasSmell(boolean hasSmell) {
		this.hasSmell = hasSmell;
	}

	public boolean isHasThorn() {
		return hasThorn;
	}

	public void setHasThorn(boolean hasThorn) {
		this.hasThorn = hasThorn;
	}

	@Override
	public String toString() {
		return "Flower ["+ super.toString()+" "+ "hasSmell=" + hasSmell + ", hasThorn=" + hasThorn + "]";
	}
	
	
	
}
