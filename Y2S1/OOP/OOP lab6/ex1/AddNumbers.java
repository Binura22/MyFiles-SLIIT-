package ex1;

import java.util.Scanner;
import java.util.ArrayList;

public class AddNumbers {
	
	public static void main(String[] args) {
		
		int Total =0 ;
		
		ArrayList<Integer> numberList = new ArrayList<Integer>();
		Scanner number = new Scanner(System.in);
		
		if(numberList.isEmpty()) {
			System.out.println("Array is empty");
		}
		else {
			System.out.println("Array is not empty");
		}
		
	    
		for(int i=1 ; i <= 10; i++) {
			
			System.out.print("Enter number " + i + ":");
			int value = number.nextInt();
			numberList.add(value);
			
		}
		number.close();
		
		for(int value :numberList ) {
			
			System.out.println(value);
			 Total = Total + value;
			
		}
		
		System.out.println("Total is:"+ Total);
		
	}
	
}
