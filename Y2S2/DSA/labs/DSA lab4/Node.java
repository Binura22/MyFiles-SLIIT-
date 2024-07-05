package lab4;

public class Node {
	public int EmpNo;
	public String Name;

	public Node leftChild, rightChild;

	public void display() {
		System.out.println("Emp No:\t" + EmpNo + "\tEmp Name :" + Name);
	}

}
