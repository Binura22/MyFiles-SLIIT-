package Ex4;

import java.util.HashMap;
import java.util.Map;

public class Ex4 {
	public static void main(String[] args) {
	
		Map<Integer, Student> StudentMap = new HashMap<>();
	
		
		StudentMap.put(1, new Student(1,"Saman",3.8));
		StudentMap.put(2, new Student(2,"Amal",3.2));
		StudentMap.put(3, new Student(3,"Kamal",2.8));
		
		int studentNumberToAccess = 3;
		
		Student studentToAccess = StudentMap.get(studentNumberToAccess);
		
		if(studentToAccess != null) {
			System.out.println("student details for student number" + studentNumberToAccess + ":");
			System.out.println(studentToAccess);
		}
		else {
			System.out.println("student with student number" + studentNumberToAccess + "not found.");
		}
	}	

}
