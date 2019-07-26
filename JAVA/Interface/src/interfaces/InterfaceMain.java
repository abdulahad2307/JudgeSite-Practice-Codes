package interfaces;

public class InterfaceMain {

	public static void main(String[] args) 
	{
		
		Discountable d1 = new PercentageDiscount(5);
		System.out.println("Total :" + d1.discountedPrice(100));
		
		Discountable d2 = new ThresholdDiscount(60,10);
		System.out.println("Total :" + d2.discountedPrice(100));
		
		Discountable d3 = new BestForCustomer(5,60,10);
		System.out.println("BEST TOTAL : " + d3.discountedPrice(100));
		

	}

}
