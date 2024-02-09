package Ex3;

import java.util.HashSet;
import java.util.Set;
import java.util.Scanner;

public class Ex3 {
	
	public static void main(String[] args) {
		
		Set<Double> uniqueHeight = new HashSet<>();
		Scanner scanner = new Scanner(System.in);
		
		for(int i = 1; i <= 10; i++){
			System.out.print("Enter height for student " + i + ":");
			double height = scanner.nextDouble();
			uniqueHeight.add(height);
		}
		
		scanner.close();
		
		System.out.println("");
		System.out.println("Unique height for students:");
		for(Double height : uniqueHeight) {
			System.out.println(height);
		}
	}

}