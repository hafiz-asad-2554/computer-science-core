import java.util.Scanner;

public class StringManipulation2 {

        public static String splice(String input, int startingIndex, int deleteLength) {
            // Check if startingIndex is less than 0, then set it to 0
            startingIndex = Math.max(0, startingIndex);
    
            // Check if deleteLength is 0, then return the original string
            if (deleteLength == 0) {
                return input;
            }
    
            // Check if startingIndex is within the bounds of the string
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
    
        public static String splice(String input, int startingIndex, int deleteLength, String replace) {
            // Check if startingIndex is less than 0, then set it to 0
            startingIndex = Math.max(0, startingIndex);
    
            // Check if replace is null, set it to an empty string
            if(replace == null){
                replace = "";
            }
            else{
                replace = replace;
            }
        
    
            // Check if startingIndex is within the bounds of the string
            if (startingIndex < input.length()) {
                // Calculate the ending index for substring
                int endIndex = Math.min(startingIndex + deleteLength, input.length());
    
                // Create the resulting string with the replacement
                String result = input.substring(0, startingIndex) + replace + input.substring(endIndex);
    
                return result;
            } else {
                // If startingIndex is beyond the length of the string, return the original string with replace appended
                return input + replace;
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
            
            System.out.print("inter the string (jo ap replace krna chahty ho :");
            String replaceString = myScanner.next();
    
            String result1 = splice(originalString, startingIndex, deleteLength);
            String result2 = splice(originalString, startingIndex, deleteLength, replaceString);
    

            System.out.println("Result without replacement: " + result1);
            System.out.println("Result with replacement: " + result2);
        }
    }
    
    
