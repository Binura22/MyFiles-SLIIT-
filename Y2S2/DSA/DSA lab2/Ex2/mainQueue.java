package Ex2;

import java.util.Scanner;

public class mainQueue {

	public static void main(String[] args) {
		
		QueueX evenQueue = new QueueX(5);
		QueueX oddQueue = new QueueX(5);
		
		Scanner sc = new Scanner(System.in);
		
		for(int i = 0 ; i < 5 ; i++) {
			
			System.out.print("Enter transaction ID " + (i+1) + " :");
			int Id = sc.nextInt();
			
			if (Id % 2 == 0) {
				evenQueue.insert(Id);
			} else {
				oddQueue.insert(Id);
			}
			
		}
		
		System.out.println();
		
		System.out.println("PC1");
		while(!evenQueue.isEmpty()) {
			System.out.println("Transaction "+ evenQueue.remove());
		}
		
		System.out.println();
		
		System.out.println("PC2");
		while(!oddQueue.isEmpty()) {
			System.out.println("Transaction "+ oddQueue.remove());
		}

	}

}
