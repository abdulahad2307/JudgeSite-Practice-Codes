package interfaces;

public class ThresholdDiscount implements Discountable 
{
	double threshold;
	double discount;
	
	
	
	public ThresholdDiscount(double threshold, double discount) 
	{
		this.threshold = threshold;
		this.discount = discount;
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
		
		if(price >= threshold)
			return price - discount;
		else
			return 0;
	}

}
