package stackEx;

public class StackX {
	private int maxSize;
	private char[] stackArray;
	private int top;

	public StackX(int S) {

		maxSize = S;
		stackArray = new char[maxSize];
		top = -1;
	}

	public boolean isEmpty() {
		return (top == -1);
	}

	public boolean isFull() {
		return (top == maxSize - 1);
	}

	public void push(char newChar) {
		if (isFull()) {
			System.out.println("Stack is full");
		} else {
			top++;
			stackArray[top] = newChar;
		}
	}

	public char pop() {
		if (isEmpty()) {
			return 'e';
		} else {
			return(stackArray[top--]);
		}
	}

	public char peek() {
		if (isEmpty()) {
			return 'e';
		} else {
			return (stackArray[top]);
		}
	}

}
