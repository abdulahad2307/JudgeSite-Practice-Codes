package task;

public class Main {

	public static void main(String[] args) 
	{
		Tutor t = new Tutor("Rahbarer XGF", "Gulshan , Dhaka", 35);
		System.out.println(t.toString());
		
		RegularTutor rt = new RegularTutor("SK Fahim Mushfiq", "Dhanmondi", 21, 50000, 2000,0);
		System.out.println(rt.toString());
		
		HourlyTutor ht = new HourlyTutor("Rahbar Ali", "Bashundhara", 33, 6.5, 5000);
		System.out.println(ht.toString());

	}

}
