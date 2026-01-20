import java.util.Scanner;

public class StringManipulation3 {

    public static String shiftLeft(String input) {
        // if the input string is not empty and has more than one character
        if ((input != null) && (input.length() > 1)) {
            // Remove the first character using substring
            char firstChar = input.charAt(0);
            String shiftedString = input.substring(1);

            // Add the first character to the end of the string
            shiftedString = shiftedString + firstChar;

            return shiftedString;
        } else {
            // Return the original string if it's empty or has only one character
            return input;
        }
    }

    public static void main(String[] args) {
        Scanner mysScanner = new Scanner(System.in);

        System.out.print("Enter your name : ");
        String originalString = mysScanner.nextLine();

        System.out.println("Original String: " + originalString);

        // Shift the string to the left
        String shiftedString = shiftLeft(originalString);

        System.out.println("Shifted String: " + shiftedString);
    }
}
