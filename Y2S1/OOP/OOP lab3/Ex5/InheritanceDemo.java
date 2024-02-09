package Ex5;

public class InheritanceDemo {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Person p1 = new Person("Amal","Malabe");
		p1.showDetails();
		
		
		Student s1 = new Student("Dilshan","Maharagama","IT22602135");
		s1.showDetails1();
		
		PartTimeStudent ps1 = new PartTimeStudent("Geeth","Kaduwela","IT22591465",5);
		ps1.showDetails2();
	}

}
