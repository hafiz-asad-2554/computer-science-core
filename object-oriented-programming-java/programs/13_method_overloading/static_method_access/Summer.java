// we can access static methods without creating class object. As statics are for all.
import java.util.Scanner;
public class Summer{

    public static void sum(int a , int b){
        System.out.println(a + b);
    }
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        System.out.println("enter a number");
        int a = scan.nextInt();
        System.out.println("enter second number");
        int b = scan.nextInt();
        // int x = sum(a, b); // call to static sum.
        // System.out.println(x);
        sum(a, b);
    }
}