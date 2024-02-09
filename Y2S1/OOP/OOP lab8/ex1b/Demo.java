package ex1b;

public class Demo {

	public static void main(String[] args) {

		Float arr1[] = { 46f, 67f, 63f, 34f, 89f, 12f, 3f, 60f, 2f };

		Double arr2[] = { 43.0, 23.6, 267.9, 32.97, 45.0, 77.4, 90.0, 12.53, 33.0 };

		Sort s1 = new Sort();
		s1.BubbleSort(arr1);
		s1.printArray(arr1);

		System.out.println();

		s1.BubbleSort(arr2);
		s1.printArray(arr2);

	}

}
