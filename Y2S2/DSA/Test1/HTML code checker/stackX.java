package Q4;

public class stackX {
	private int maxSize;
	private char stackArray[];
	private int top;
	
	stackX(int S){
		maxSize = S;
		stackArray = new char[maxSize];
		top = -1;
	}
	
	public boolean isFull() {
		return (top == maxSize -1);
	}
	
	public boolean isEmpty() {
		return (top == -1);
	}
	
	public void push(char J) {
		if(!isFull()) {
			stackArray[++top] = J;
		} else {
			System.out.println("Stack is full !");
		}
	}
	
	public char pop() {
		if(!isEmpty()) {
			return(stackArray[top--]);
		} else {
			System.out.println("Stack is empty !");
			return (char) -99;
		}
	}
	
	public char peek() {
		if(!isEmpty()) {
			return(stackArray[top]);
		} else {
			System.out.println("Stack is empty !");
			return (char) -99;
		}
	}

}
