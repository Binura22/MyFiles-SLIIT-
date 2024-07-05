package Ex3;

import java.util.Scanner;

public class mainQueue {

	public static void main(String[] args) {

		QueueX mainQueue = new QueueX(5);

		PC1 evenQueue = new PC1(5);
		PC2 oddQueue = new PC2(5);

		Scanner sc = new Scanner(System.in);

		for (int i = 0; i < 5; i++) {

			System.out.print("Enter transaction ID " + (i + 1) + " :");
			int Id = sc.nextInt();
			mainQueue.insert(Id);

		}

		System.out.println();

		while (!mainQueue.isEmpty()) {

			int value = mainQueue.remove();

			if (value % 2 == 0) {
				evenQueue.insert(value);
			} else {
				oddQueue.insert(value);
			}

		}

		System.out.println("PC1");

		while (!evenQueue.isEmpty()) {
			System.out.println("Transaction :" + evenQueue.remove());
		}
		
		System.out.println("PC2");

		while (!oddQueue.isEmpty()) {
			System.out.println("Transaction :" + oddQueue.remove());
		}
	}

}
