package Ex5;

public class Student extends Person{
	
	String Studentid;

	public Student(String newName, String newAddress, String studntId) {
		super(newName, newAddress);
		Studentid = studntId;
	}
	public void showDetails1() {
		super.showDetails();
		System.out.println("My id number is "+ Studentid);
	}
}
