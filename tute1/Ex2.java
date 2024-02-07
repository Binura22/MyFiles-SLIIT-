/*import java.util.Scanner;

public class Ex2{
    public static void main(String args[]){
        System.out.print("Enter your numbers:");
        Scanner takenumber = new Scanner(System.in);
        int number = takenumber.nextInt();

        do{
            int counter = 0;
            int total = 0;
            if(number < 0){
                break;
            }
            else{
                total = total + number;
                counter++;
            }
        }while(number < 0);
        double avg = (double)total / counter;
        System.out.print("Avarage is:"+ avg);

    }
}
*/
import java.util.Scanner;

public class Ex2 {
    public static void main(String args[]) {
        System.out.print("Enter your numbers:");
        Scanner takenumber = new Scanner(System.in);
        
        int counter = 0; // Initialize counter outside the loop
        int total = 0;   // Initialize total outside the loop
        
        int number; // Declare number outside the loop
        
        do {
            number = takenumber.nextInt(); // Read number inside the loop
            
            if (number < 0) {
                break;
            } else {
                total = total + number;
                counter++;
            }
        } while (true); // Loop until explicitly broken
        
        // Check if counter is not zero to avoid division by zero
        if (counter != 0) {
            double avg = (double) total / counter;
            System.out.print("Average is: " + avg);
        } else {
            System.out.println("No numbers entered.");
        }
    }
}
