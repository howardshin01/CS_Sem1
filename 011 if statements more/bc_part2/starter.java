import java.util.Scanner;

class starter {
	public static void main(String args[]) {
	
		Scanner sc = new Scanner(System.in);
		System.out.println("Plug in a integer");
		int x = sc.nextInt();	
		System.out.println("Plug in a integer");
		int y = sc.nextInt();
		System.out.println("Plug in a integer");
		int z = sc.nextInt();
	
		if((x>y)&&(x>z)) {
		System.out.println("x is the largest number");
	}
	else if((y>x)&&(y>z)) {
		System.out.println("y is the largest number");
	}
	else if((z>x)&&(z>y)) {
		System.out.println("z is the largest number");
	}
		
		if((x<y)&&(x<z)) {
		System.out.println("x is the smallest number");
	}
	else if((y<x)&&(y<z)) {
		System.out.println("y is the smallest number");
	}
	else if((z<x)&&(z<y)) {
		System.out.println("z is the smallest number");
	}
	}
}
