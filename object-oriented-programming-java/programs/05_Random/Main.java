import java.util.Random;
public class Main{
    public static void main(String[] args){
    Random rand = new Random();// object creation;

    int range = rand.nextInt(); // creates a random with no limits
    System.out.println(range);

    int endRange = rand.nextInt(100); // gives a number between zero and (n-1); in given statement limitRange will be between zero and 99;
    System.out.println(endRange);

    int startEndRange = rand.nextInt(47) + 4; // gives a number between 4 and 50 (both included)
    System.out.println(startEndRange);

    float floatRand = rand.nextFloat();// creates a number between 0.0 and 1.0 !IMPORTANT 1.0 is not included
    System.out.println(floatRand);
    }
}