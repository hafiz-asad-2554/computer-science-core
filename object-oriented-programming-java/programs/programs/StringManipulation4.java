import java.util.Scanner;

public class StringManipulation4 {

    

        public static String shiftLeft(String input) {
            // if the input string is not empty and has more than one character
            return shiftLeft(input, 1);
        }
    
        public static String shiftLeft(String input, int n) {
            //  if n is 0, then return the original string
            if (n == 0) {
                return input;
            }
    
            // if the input string is not empty and has more than n characters
            if (input != null && input.length() > n) {
                // Remove the first n characters using substring
                String shiftedChars = input.substring(0, n);
    
                // Add the removed characters to the end of the string
                String shiftedString = input.substring(n) + shiftedChars;
    
                return shiftedString;
            } else {
                // Return the original string if it's empty or has fewer characters than n
                return input;
            }
        }
    
        public static void main(String[] args) {
            
            Scanner myScanner = new Scanner(System.in);
            System.out.print("Enter your name :");
            String originalString = myScanner.nextLine();
            
            System.out.println("Original String: " + originalString);
            
            // Shift the string to the left by n characters
            System.out.print("Enter any number (jitnay ap charecters shift krna chahty ho) :");
            int n = myScanner.nextInt();
            String shiftedString = shiftLeft(originalString, n);
    
            System.out.println("Shifted String: " + shiftedString);
        }
    }
    
    

