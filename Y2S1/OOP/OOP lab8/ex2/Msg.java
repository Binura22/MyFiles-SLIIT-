package ex2;

public class Msg {

	public static void main(String[] args) {

		print("Age is", 23);
		print("Length is", 45);
		print("value is", 32.6);

	}

	public static <T> void print(String message, T val) {
		System.out.println(message + ":" + val);
	}
}
