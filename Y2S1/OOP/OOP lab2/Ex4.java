import java.io.*;

public class Ex4{
    public static void main (String[] args){

        InputStreamReader obj1 = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(obj1); 

        int length,width,height;

        System.out.print("Enter length :");
        length = Integer.parseInt(in.readLine());

        System.out.print("Enter width :");
        width = Integer.parseInt(in.readLine());

        System.out.print("Enter height :");
        height = Integer.parseInt(in.readLine());


        double calcVolume = length* width *height;
        System.out.println("Volume is:"+ calcVolume);
    }
}