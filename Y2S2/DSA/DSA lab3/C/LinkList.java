package C;

public class LinkList {
	private Link first;

	LinkList() {
		first = null;
	}

	public boolean isEmpty() {
		return (first == null);
	}

	public void displayList() {
		Link current = first;

		while (current != null) {
			current.displayDetails();
			current = current.next;
		}
	}

	public void insertFirst(String name, double avg) {
		Link newLink = new Link(name, avg);
		newLink.next = first;
		first = newLink;
	}

	public Link deleteFirst() {

		Link tempValue = first;
		if (!isEmpty()) {
			first = first.next;
		}
		return tempValue;
	}

	public Link deleteLink(String name) {
		Link current = first;
		Link previous = first;

		while (current != null) {
			if (current.name == name) {
				previous.next = current.next;
				return current;
			} else {
				previous = current;
				current = current.next;
			}
		}
		return current;
	}

}
