import java.util.Scanner;
import java.util.Random;

class starter {
	public static void main(String args[]) {
	
	// 1. Create 4 random numbers and output them
	// a.
	int x;
		
		Random rand;
		rand = new Random();	
		
		x = 0;
		x = rand.nextInt(10);	
		System.out.println(x);
		
	// b.
	int y;
		
		rand = new Random();	
		
		y = 0;
		y = rand.nextInt(100) + 1;	
		System.out.println(y);
		
	// c. 
	double a;
		a = 0;
		a = rand.nextDouble();
								
		a = a + 2.5;
		System.out.println(a);

	// d.
	double b;
		b = rand.nextInt(575);	
		b = b + 14;	
		b = b + rand.nextDouble();
		System.out.println(b);

	}
}
