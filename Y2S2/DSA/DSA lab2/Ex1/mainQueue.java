package Queues;

import java.util.Scanner;

public class mainQueue {

	public static void main(String[] args) {

		QueueX q1 = new QueueX(5);

		Scanner sc = new Scanner(System.in);

		for (int i = 0; i < 5; i++) {

			System.out.print("Enter transaction ID " + (i + 1) + " :");
			int Id = sc.nextInt();
			q1.insert(Id);

		}
		
		System.out.println();
		
		while (!q1.isEmpty()) {
			System.out.println(q1.remove());
		}
		

	}

}
