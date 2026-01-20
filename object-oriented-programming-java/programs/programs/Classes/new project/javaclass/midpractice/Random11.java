package javaclass.midpractice;
import java.util.Random;

public class Random11 {
    public static void main(String[] args) {
        Random nmbr = new Random();
        double range = nmbr.nextDouble()* 0.3 + 0.2;
        System.out.println(range);
    }
}
