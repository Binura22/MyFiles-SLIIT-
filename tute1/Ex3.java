import java.util.Scanner;

public class Ex3{
    public static void main(String args[]){

        System.out.print("Enter number:"); //take number from user
        Scanner value = new Scanner(System.in);
        int number = value.nextInt();

        int i;

        for(i=1;i<=number;i++){
            int ans = i*number; // calculation part

            System.out.println(number+"x"+i+"="+ans);//print answers
        }
    }
}