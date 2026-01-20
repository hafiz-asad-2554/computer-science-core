public class ExceptionDemo {
    public static void main(String[] args) {
        try {
            int data = 100 / 0;
        } catch (ArithmeticException e) {
            System.out.println("Error: " + e);
        } finally {
            System.out.println("Finally block is always executed.");
        }
        System.out.println("Rest of the code...");
    }
}
