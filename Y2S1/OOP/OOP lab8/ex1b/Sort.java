package ex1b;

public class Sort {

	public <T extends Number> void BubbleSort(T[] arr) {

		for (int i = 0; i < arr.length - 1; i++) {

			for (int j = 0; j < arr.length - i - 1; j++) {

				if (arr[j].doubleValue() > arr[j + 1].doubleValue()) {
					T temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
				}
			}
		}
	}

	public <T extends Number> void printArray(T arr[]) {

		for (int i = 0; i < arr.length; i++) {

			System.out.println(arr[i] + " ");
		}
		System.out.println();
	}

}
