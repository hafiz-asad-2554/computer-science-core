import java.util.Scanner;
import java.lang.Math;
// write a program to find the discriminent and roots of the quadratic equation.
// ax^2 + bx + c = 0;

public class Quadratic{
    public static void main(String[] args){

    // first create the object of scanner class
    Scanner scan = new Scanner(System.in);
    int a, b, c;//here the a, b, and c are the constants / cofficents of equation;
    double discriminent, root1, root2;

    System.out.println("enter the cofficent of x^2 (a): ");
    a = scan.nextInt();

    System.out.println("enter the cofficent of x (b): ");
    b = scan.nextInt();

    System.out.println("enter the constant (c): ");
    c = scan.nextInt();

    // first find the discriminent by formula (b^2 - 4ac), and use in quadratic roots formula;
    discriminent = Math.pow(b, 2) - (4 * a * c);
    System.out.println(discriminent);

    // root1 = (-b + sqrt(b^2 - 4ac)) / (2a);
    root1 = ((-1 * b) + Math.sqrt(discriminent)) / (2 * a); // as discriminent was equal to (b^2 - 4ac);

    // root2 = (-b - sqrt(b^2 - 4ac)) / (2a);
    root2 = ((-1 * b) - Math.sqrt(discriminent)) / (2 * a); 

    System.out.println("Root #1: " + root1);
    System.out.println("Root #2: " + root2);

    }
}