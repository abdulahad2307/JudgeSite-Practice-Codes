package interfaces;

public class PercentageDiscount implements Discountable 
{

	double percentage;
	
	public PercentageDiscount(double percentage) 
	{
		this.percentage = percentage;
	}
	
	public double getPercentage() {
		return percentage;
	}

	public void setPercentage(double percentage) {
		this.percentage = percentage;
	}

	@Override
	public double discountedPrice(double price) {
		
		return price-(price*percentage)/100;
	}

}
