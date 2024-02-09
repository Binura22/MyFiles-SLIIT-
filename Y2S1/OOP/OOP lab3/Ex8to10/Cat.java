package Ex8to10;

public class Cat extends Pet{
	
	private int livesLeft;
	
	public Cat(String n, String o, int a, int l) {
		super(n, o, a);
		this.livesLeft = l;
	}
	
	//overloaded constructor
	public Cat(String n, String o) {
		super(n, o, 0);
		this.livesLeft = 7;
	}


	public void showDetails1(){
		super.showDetails();
		System.out.println("I can live "+this.livesLeft);
		}

}
