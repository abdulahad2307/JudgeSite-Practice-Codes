package lab10;

public class Main {

	public static void main(String[] args) 
	{
		Plant plants[] = new Plant [3];
		
		Plant p1 = new Plant ("Neem", "Green");
		Plant p2 = new Flower ("Rose","Red",true,true);
		Plant p3 = new Herb ("Bush","Light Green",true,"Summer");
		
		add(plants , p1);
		add(plants , p2);
		display(plants);
		System.out.println("\n");
		add(plants, p3);
		display(plants);
		System.out.println("\n");
		System.out.println(search(plants,"Rose"));
	}
	
	public static void add(Plant[] plants , Plant p)
	{
		
		for (int i = 0 ; i < 3 ; i++)
		{
			if(plants[i] != null)
			{
				continue;
			}
			else
			{
				plants [i] = p;
				break;
			}
		}	
		
	}
	
	public static void display(Plant[] plants)
	{
		for (int i = 0 ; i<3 ; i++)
		{
			if(plants[i] != null)
				System.out.println(plants[i].toString());
		}
	}
	
	public static boolean search(Plant[] plants , String n)
	{
		int count = 0;
		for (int i = 0 ; i < 3 ; i++)
		{
			if(plants[i].getName() == n)
			{
				count++;
			}
	
		}
		
		
		if(count > 0)
			return true;
		else
			return false;
	}

}
