package interfaces;

public class BestForCustomer implements Discountable 
{

	double percentage;
	double threshold;
	double discount;
	
	public BestForCustomer(double percentage, double threshold, double discount) 
	{
		this.percentage = percentage;
		this.threshold = threshold;
		this.discount = discount;
	}
	
	public double getPercentage() {
		return percentage;
	}
	
	public void setPercentage(double percentage) {
		this.percentage = percentage;
	}

	public double getThreshold() {
		return threshold;
	}

	public void setThreshold(double threshold) {
		this.threshold = threshold;
	}

	public double getDiscount() {
		return discount;
	}
	
	public void setDiscount(double discount) {
		this.discount = discount;
	}
	
	@Override
	public double discountedPrice(double price) {
		
		double p1 = price-(price*percentage)/100;
		double p2;
		
		if(price >= threshold)
			p2 = price - discount;
		else
			p2 = price;
		
		return Math.min(p1, p2);
			
	}

}
