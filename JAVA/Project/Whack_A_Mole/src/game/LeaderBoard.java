package game;

public class LeaderBoard 
{
	private String name ;
	private int totalscore ;
	
	public LeaderBoard(String name,int totalscore) {
		this.name = name;
		this.totalscore = totalscore;
	}

	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}

	public int getTotalscore() {
		return totalscore;
	}

	public void setTotalscore(int totalscore) {
		this.totalscore = totalscore;
	}

	@Override
	public String toString() {
		return name + " " + totalscore;
	}

	public int compareTo(LeaderBoard lb1) {
		int compareQuantity = ((LeaderBoard) lb1).getTotalscore(); 
		
		//ascending order
		//return this.getTotalscore() - compareQuantity;
		
		//descending order
		return compareQuantity - this.getTotalscore();
	}
	
	
	
}
