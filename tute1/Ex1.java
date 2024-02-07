import java.util.Scanner;

public class Ex1{
    public static void main(String args[]){

        System.out.print("Enter your number:");
        Scanner takenumber = new Scanner(System.in);
        int number = takenumber.nextInt();

        if(number < 0){
            System.out.println("please enter positive value !");
        }
        else{
            int total = 1;
            int i;
            for(i=1;i<=number;i++){
                total = total * i;
            }
            System.out.println("factorial value is :"+ total);
        }
    }
}