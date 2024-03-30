package Q4;

import java.util.Scanner;

public class MainApp {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);

		String ans;
		do {
			System.out.println("Enter your html code :");
			String htmlCode = sc.next();

			stackX s1 = new stackX(5);

			for (int i = 0; i < htmlCode.length(); i++) {
				if (htmlCode.charAt(i) == '<') {

					if (htmlCode.charAt(i + 1) == '/') {
						s1.pop();
					} else {
						s1.push(htmlCode.charAt(i));
					}

				}
			}

			System.out.println();
			System.out.println("Output:");
			if (s1.isEmpty()) {
				System.out.print("Your entered html code is valid");
			} else {
				System.out.print("Your entered html code is Invalid");
			}

			System.out.println();
			System.out.println();
			System.out.print("Do you have another code to check : ");
			ans = sc.next();

			System.out.println();

		} while (ans.equalsIgnoreCase("Y") || ans.equalsIgnoreCase("y"));

	}

}
