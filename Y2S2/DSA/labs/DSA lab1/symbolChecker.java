package stackEx;

public class symbolChecker {

	private String value;
	private int count1; // take count1 and count 2 variable to handle error ex:9+8))
	private int count2;

	public symbolChecker(String value) {
		this.value = value;
		count1 = 0;
		count2 = 0;
	}

	public void passToStack() {
		StackX obj1 = new StackX(value.length());

		for (int i = 0; i < value.length(); i++) {
			if (value.charAt(i) == '(') {
				obj1.push('(');
				count1++;
			} else if (value.charAt(i) == ')') {
				obj1.pop();
				count2++;
			}
		}
		
		if((obj1.isEmpty()) & (count1 == count2)) {
			System.out.println("Entered expression is valid");
		} else {
			System.out.println("Entered expression is invalid !");
		}
	}

}
