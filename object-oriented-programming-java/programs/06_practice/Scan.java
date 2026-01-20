// practice set;
import java.util.Scanner;
import java.util.Random;
public class Scan{
    public static void main(String[] args){
        Scanner obj = new Scanner(System.in);
        System.out.print("Who are you?");
        String name = obj.nextLine();
        System.out.println("Hi " + name);

        Random rand = new Random();
        int first = rand.nextInt(4) + 3;
        System.out.println("Go to floor number# " + first + " and jump because we don't need you anymore.");
        
    }
}