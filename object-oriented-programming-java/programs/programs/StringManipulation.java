import java.util.Scanner;


public class StringManipulation {
        
        public static String splice(String input, int startingIndex, int deleteLength) {
            // if startingIndex is less than 0, then seting it to 0
            startingIndex = Math.max(0, startingIndex);
    
            // if deleteLength is 0, then return the original string
            if (deleteLength == 0) {
                return input;
            }
    
            // if startingIndex is within the bounds of the string
            if (startingIndex < input.length()) {
                // Calculate the ending index for substring
                int endIndex = Math.min(startingIndex + deleteLength, input.length());
    
                // Remove the specified characters using substring
                String result = input.substring(0, startingIndex) + input.substring(endIndex);
    
                return result;
            } else {
                // If startingIndex is beyond the length of the string, return the original string
                return input;
            }
        }
    
        public static void main(String[] args) {
            
            Scanner myScanner = new Scanner(System.in);

            String originalString = "Hafiz Asad Mustafa";
            System.out.println("Original String: " + originalString);

            System.out.print("inter starting indux (jaha sy ap string ko delete krna chahty ho :)");
            int startingIndex = myScanner.nextInt();
            
            System.out.print("inter the lenght (kitnay letters  ko delete krna chahty ho :)");
            int deleteLength =  myScanner.nextInt();
    
            String result = splice(originalString, startingIndex, deleteLength);
            System.out.println("Resulting String: " + result);
        }
    }
    
    