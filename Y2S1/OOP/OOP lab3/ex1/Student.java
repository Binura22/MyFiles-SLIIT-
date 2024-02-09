package ex1;

public class Student {
	 String name;
	 String ditno;
	 String address;
	
	public Student(){
		name = "";
		ditno = "";
		address = "";
	}
	
	public Student(String Name,String DitNo,String Addr) {
		this.name = Name;
		this.ditno = DitNo;
		this.address = Addr;
	}
	
	public void displayDetails() {
		System.out.println("My name is " + name);
		System.out.println("My id no is "+ditno);
		System.out.println("I am from"+ address);
		System.out.println("");
	}
	 


}
