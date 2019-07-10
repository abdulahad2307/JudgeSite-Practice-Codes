package classes3;

public class QuizScript 
{
	private String name;
	private int id ;
	private int total;
	private double mark;

	public QuizScript(String name, int id) 
	{
		this.name = name;
		this.id = id;
	}

	public QuizScript() 
	{

	}

	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}

	public int getId() {
		return id;
	}

	public void setId(int id) {
		this.id = id;
	}

	public int getTotal() {
		return total;
	}

	public void setTotal(int total) {
		this.total = total;
	}

	public double getMark() {
		return mark;
	}

	public void setMark(double mark) {
		this.mark = mark;
	}
	  
  
  
  
  
}
