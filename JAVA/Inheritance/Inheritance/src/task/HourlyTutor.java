package task;

public class HourlyTutor extends Tutor
{
	private double avgTeachingHour;
	private double hourlySalary;
	public HourlyTutor(String name, String address, int age, double hour , double salary) 
	{
		super(name, address, age);
		this.avgTeachingHour = hour;
		this.hourlySalary = salary;
		
	}
	public double getAvgTeachingHour() {
		return avgTeachingHour;
	}
	public void setAvgTeachingHour(double avgTeachingHour) {
		this.avgTeachingHour = avgTeachingHour;
	}
	public double getHourlySalary() {
		return hourlySalary;
	}
	public void setHourlySalary(double hourlySalary) {
		this.hourlySalary = hourlySalary;
	}
	
	public double computeYearlySalary()
	{
		return hourlySalary*avgTeachingHour*5*52;
	}
	@Override
	public String toString() {
		return super.toString() + "	Type: Hourly" + "	Annual Salary: " + computeYearlySalary();
	}
	
	
	
	
	
	
	
}
