package ex1a;

public class ex1 {

	public static void main(String[] args) {

		int arr[] = { 3, 4, 6, 7, 8, 10, 4, 2, 9, 6 };
		
		System.out.println("Print original array");
		printArray(arr);
		
		bubbleSort(arr);
		
		System.out.println("Print sorted array");
		printArray(arr);

	}

	static void bubbleSort(int arr[]) {

		int n = arr.length;

		for (int i = 0; i < n - 1; i++) {

			for (int j = 0; j < n - i - 1; j++) {

				if (arr[j] > arr[j + 1]) {
					// swap arr[j+1] and arr[i]
					int temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
				}
			}
		}
	}

	static void printArray(int arr[]) {
		
		for (int i = 0; i < arr.length; i++) {
			
			System.out.println(arr[i] + " ");
		}
		System.out.println();
	}

}
