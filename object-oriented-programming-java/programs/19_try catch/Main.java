/**
 * Main
 */
public class Main {

    public static void main(String[] args) throws Exception {
        int a = 10;
        int b = 0;
        
        try {
            int c = a / b; // error
            System.out.println(c);
        } catch (ArithmeticException e) {
            System.out.println("deviding the number by zero is not valid ");
        }

        System.out.println("end of the program.");
    }
}