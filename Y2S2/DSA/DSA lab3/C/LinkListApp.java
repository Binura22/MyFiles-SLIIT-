package C;

public class LinkListApp {

	public static void main(String[] args) {
	
		LinkList l1 = new LinkList();
		l1.insertFirst("Prashani", 69.5);
		l1.insertFirst("Aravinda", 78.0);
		l1.insertFirst("Nipuna", 53.5);
		
		
		//l1.displayList();
		
		l1.deleteLink("Aravinda");
		l1.displayList();
		
		//l1.deleteFirst();
		
	}

}
