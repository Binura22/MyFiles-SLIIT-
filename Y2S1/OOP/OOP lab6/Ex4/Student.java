package Ex4;

public class Student {

	public static Student studentNumberToAccess;
	public int id;
	public String name;
	public double gpa;
	
	

	public Student(int id, String name, double gpa) {
		
		this.id = id;
		this.name = name;
		this.gpa = gpa;
		
	}



	public static Student getStudentNumberToAccess() {
		return studentNumberToAccess;
	}


	public static void setStudentNumberToAccess(Student studentNumberToAccess) {
		Student.studentNumberToAccess = studentNumberToAccess;
	}


	public int getId() {
		return id;
	}

	public String getName() {
		return name;
	}

	public double getGpa() {
		return gpa;
	}


}
