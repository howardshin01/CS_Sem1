import java.util.Scanner;
import java.util.Random;

class starter {
	public static void main(String args[]) {
		// the string "I love to learn coding remotely." will appear in
		// the command window when you compile and run this program.
		
		int x;
		
		Random rand; // Constructor 
		rand = new Random();	// Declare
		
		x = 5;	// Declaring x
		x = rand.nextInt(46);	// 0 - 45
		System.out.println(x);
		
		// 5 - 50
		x = rand.nextInt(46) + 5;	// 0 - 45
									// 5 - 50
		x = rand.nextInt(66) + 10;
		// or x = x = 10;
		
		System.out.println(x);
		
		
		double a;
		a = 0;
		a = rand.nextDouble();	// 0 - 1, not 1
		System.out.println(a);
								// 12.5 - 13.5
								
		a = a + 12.5;
		System.out.println(a);
		
		a = rand.nextDouble();	// 0 - 1, not 1
		System.out.println(a);
	
		a = a + 35.3;
		System.out.println(a);
		
		double b;
		b = rand.nextDouble();
		System.out.println(b);
		b = b + 35.3;
		System.out.println(b);
		
		// double between 5 - 205
		double c;
		c = rand.nextInt(200);	// 0 - 199
		System.out.println(c);
		c = c + 5;				// 5 - 204
		System.out.println(c);
		c = c + rand.nextDouble();
		System.out.println(c);
	
		
	}
}
