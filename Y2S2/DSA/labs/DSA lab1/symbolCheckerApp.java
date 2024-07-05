package stackEx;

import java.util.Scanner;

public class symbolCheckerApp {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		
		String checkletter;
		do {
			System.out.print("Enter your expression : ");
			String expression = sc.next();
		
			symbolChecker s1 = new symbolChecker(expression);
			s1.passToStack();
			
			System.out.println();
			
			System.out.print("Press Y to try again :");
			checkletter = sc.next();
			System.out.println();

			
		} while(checkletter.equals("Y") || checkletter.equals("y"));
		
	}

}
