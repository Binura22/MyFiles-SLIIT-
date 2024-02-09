import java.util.Scanner;

public class Ex3{
    public static void main (String[] args){
        System.out.print("Enter length :");
        Scanner len1 = new Scanner(System.in);
        int length = len1.nextInt();

        System.out.print("Enter width :");
        Scanner wid1 = new Scanner(System.in);
        int width = wid1.nextInt();

        System.out.print("Enter height :");
        Scanner hei1 = new Scanner(System.in);
        int height = hei1.nextInt();


        double calcVolume = length* width *height;
        System.out.println("Volume is:"+ calcVolume);
    }
}