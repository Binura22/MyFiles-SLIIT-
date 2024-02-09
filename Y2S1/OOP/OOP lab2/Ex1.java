public class Ex1{
    public static void main (String args[]){
        int miles = 26;
        int yards = 385;
        double kilometers;

        double yardsToKm = miles * 1.609;
        double milesTokm = (yards / 1760.0) * 1.609; 

        double totalkm = yardsToKm + milesTokm;

        System.out.println("Total km = "+ totalkm);
        
    }
}