package Ex2;

public class QueueX {
	private int queueArr[];
	private int maxSize;
	private int rear;
	private int front;
	private int noItems;
	
	QueueX(int s){
		maxSize = s;
		queueArr = new int[maxSize];
		rear = -1;
		front = 0;
		noItems = 0;
	}
	
	public boolean isEmpty() {
		return(noItems == 0);
		
	}
	public boolean isFull() {
		return(rear == maxSize - 1);
	}
	
	public void insert(int j) {
		if(isFull()) {
			System.out.println("Queue is full !");
		} else {
			queueArr[++rear] = j;
			noItems++;
		}
		
	}
	public int remove() {
		if(isEmpty()) {
			System.out.println("Queue is empty !");
			return -99;
		} else {
			noItems--;
			return(queueArr[front++]);	
		}
		
	}

}