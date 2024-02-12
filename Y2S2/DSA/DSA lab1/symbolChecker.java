package stackEx;

public class symbolChecker {

	private String value;

	public symbolChecker(String value) {
		this.value = value;
	}

	public void passToStack() {
		StackX obj1 = new StackX(value.length());

		for (int i = 0; i < value.length(); i++) {
			if (value.charAt(i) == '(') {
				obj1.push('(');
			} else if (value.charAt(i) == ')') {
				obj1.pop();
			}
		}
		
		if(obj1.isEmpty()) {
			System.out.println("Entered expression is valid");
		} else {
			System.out.println("Entered expression is invalid !");
		}
	}

}
