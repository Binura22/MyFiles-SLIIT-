import java.util.Scanner;

public class Demo{

    public static void main (String[] args){

        System.out.print("Enter your number :");
        Scanner obj1 = new Scanner(System.in);
        int number = obj1.nextInt();

        EvenOddNumber num = new EvenOddNumber();

        boolean result = num.findEvenOrOdd(number);

        if (result == true) {
            System.out.print("Number is even");
        }
        if (result ==  false){
            System.out.print("Number is odd");
        }

    }
    
}