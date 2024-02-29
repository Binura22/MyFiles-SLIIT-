package A;

public class Link {
	public String name;
	public double average;
	public Link next;
	
	Link(String name, double average){
		this.name = name;
		this.average = average;
		next = null;
	}
	
	public void displayDetails() {
		System.out.println(name +" | "+average);
	}

}
