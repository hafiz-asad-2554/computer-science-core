import java.util.Scanner;

class Calculator {
    public int add(int a, int b) { return a + b; }
    public int sub(int a, int b) { return a - b; }
    public int mul(int a, int b) { return a * b; }
    public double div(int a, int b) { return (double)a / b; }
}

public class BasicCalculator {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Calculator calc = new Calculator();
        
        System.out.print("Enter num1: ");
        int n1 = sc.nextInt();
        System.out.print("Enter num2: ");
        int n2 = sc.nextInt();
        
        System.out.println("Sum: " + calc.add(n1, n2));
        System.out.println("Difference: " + calc.sub(n1, n2));
        
        sc.close();
    }
}
