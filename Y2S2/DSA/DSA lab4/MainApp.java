package lab4;

import java.util.Scanner;

public class MainApp {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		Tree newTree = new Tree();	
		
		newTree.insert(149, "Anusha");
		newTree.insert(167, "Kosala");
		newTree.insert(047, "Dinusha");
		newTree.insert(066, "Mihiri");
		newTree.insert(159, "Jayani");
		newTree.insert(118, "Nimal");
		newTree.insert(195, "Nishantha");
		newTree.insert(034, "Avodya");
		newTree.insert(105, "Bimali");
		newTree.insert(133, "Sampath");
		
		//InOrder 
		newTree.TraverseInorder();
		
		System.out.println();
		
		//PreOrder
		newTree.TraversePreorder();
		
		System.out.println();
		
		//PostOrder;
		newTree.TraversePostorder();
		
		System.out.println();
		System.out.print("Enter emp no to find:");
		int FindempNo = sc.nextInt();
		newTree.find(FindempNo);
		
		System.out.println();
		
		//delete all
		newTree.deleteAll();
		
		//display after deletion
		newTree.TraverseInorder();
		newTree.TraversePreorder();
		newTree.TraversePostorder();
		
	}

}

