package lab11;

public class AbstractMain {

	public static void main(String[] args) 
	{
		Shape[] shape = new Shape[3];
		
		shape[0] = new Circle (5,"RED",true);
		System.out.println(shape[0].toString());
		
		shape[1] = new Rectangle(10,10,"Black",false);
		System.out.println(shape[1].toString());
		
		shape[2] = new Triangle ("Yellow", true, 2,2,2);
		System.out.println(shape[2].toString());
		
		System.out.println("Total Area=" + sumArea(shape));

	}
	
	public static double sumArea(Shape[] shape)
	{
		double tarea=0;
		for (int i = 0 ; i < 3 ; i++)
		{
			tarea = tarea + shape[i].getArea();
		}
		
		return tarea;
	}

}
