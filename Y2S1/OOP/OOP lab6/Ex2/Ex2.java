package Ex2;

import java.util.ArrayList;

public class Ex2 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
//		int studentID;
//		String Name;
//		double GPA;
			
		
		ArrayList<Student> StudentList = new ArrayList<>();
	
		Student student;
		
		StudentList.add(new Student(1,"Saman",3.8));
		StudentList.add(new Student(2,"Amal",3.2));
		StudentList.add(new Student(3,"Kamal",2.8));
		
		for(Student Student : StudentList) {
			System.out.println(Student);
		}
	}

}