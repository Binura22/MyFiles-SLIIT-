import java.util.Scanner;

public class Ex3{

    public static void main(String args[]){

        System.out.print("Value of the day:");
        Scanner dayvalue = new Scanner(System.in);
        int day = dayvalue.nextInt();
        

        if(day >=1 && day <= 7){

            switch(day){
                case 1 : System.out.println("Monday");
                    break;
                case 2 : System.out.println("Tuesday");
                    break;
                case 3 : System.out.println("Wednesday");
                    break;
                case 4 : System.out.println("Thursday");
                    break;
                case 5 : System.out.println("Friday");
                    break;
                case 6 : System.out.println("Saturday");
                    break;
                case 7 : System.out.println("Sunday");
                    break;
            }
        }
        else{
            System.out.println("Invalid Day!");
        }

        System.out.println("Good Bye!");
        
    }
}