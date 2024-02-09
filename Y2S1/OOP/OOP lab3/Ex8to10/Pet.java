package Ex8to10;

public class Pet {
	
	private String name;
	private String owner;
	private int age;
	
	public Pet(String n, String o, int a) {
	this.name = n;
	this.owner = o;
	this.age = a;
	}
	
	//overloaded constructor
	public Pet(String n, String o) {
		this.name = n;
		this.owner = o;
		this.age = 0;
		}
	
	public void showDetails(){
	System.out.println("I am a pet. My name is "+this.name+". My owner is "+this.owner +" My age is"+this.age);
	}


}
