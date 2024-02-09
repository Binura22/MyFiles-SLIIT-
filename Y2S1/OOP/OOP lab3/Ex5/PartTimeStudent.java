package Ex5;

public class PartTimeStudent extends Student{
	
	int Whrs;
	
	public PartTimeStudent(String newName, String newAddress, String studntId, int workingHrs) {
		super(newName, newAddress, studntId);
		Whrs = workingHrs;
	}
	public void showDetails2() {
		super.showDetails1();
		System.out.println("My working hrs is :"+Whrs);
	}

}
