import java.util.Scanner;

public class Ex4{
    public static void main(String args[]){

        System.out.print("Enter a string:"); 
        Scanner sc = new Scanner(System.in);
        String input = sc.nextLine();
        String output ="";

        int len = input.length();
        for(int i = len - 1;i >=0; i--){
            output = output + input.charAt(i);
        }

        System.out.print("Resered string is:"+output);
        
    }
}