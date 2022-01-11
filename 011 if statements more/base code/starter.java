import java.util.Scanner;

class starter {
	public static void main(String args[]) {

	Scanner sc = new Scanner(System.in);
	System.out.println("Plug in a integer");
	int x = sc.nextInt();
	System.out.println("Plug in another integer");
	int y = sc.nextInt();
	
	if(x!=y) {
		System.out.println("They are different values");
	}
	else if(x==y) {
		System.out.println("They are the same values");
	}
		
	}
}
