import java.util.Scanner;

public  class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter a number: ");
        int num = scanner.nextInt();
        System.out.println("You entered: " + num);
        System.out.println("Is it even? " + isEven(num));
        Check(num);
        }

        public static void Check(int num) {
            if (num % 2 == 0)
            {
                System.out.println("Yes! this  number is even");

            }
            else 
            {
                System.out.println("No this  is not even");

            }
        }

        public static boolean isEven(int num) {
            if (num % 2 == 0)
                {
                return true;
                }
                else 
                {
                    return false;
                }
            }
        }
                   
