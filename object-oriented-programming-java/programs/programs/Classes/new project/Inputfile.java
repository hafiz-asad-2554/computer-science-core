import java.util.Scanner;
// it is necessary to import this pkg to access scanner function and to input data



public class Inputfile {
    public static void main(String[] args) {
        
         // All input methods with the help of Scanner Class 
    Scanner scanner = new Scanner(System.in);
        // it is necessary to create object and constructor of scanner class 


        // Reading different types of inputs using Scanner


        // for integer the method is .nextinteger()
    System.out.print("Enter an integer: "); 
    int intValue = scanner.nextInt();  


        //for double the method is .nextdouble()
    System.out.print("Enter a double: ");
    double doubleValue = scanner.nextDouble();  

    System.out.print("Enter a boolean (true/false): ");
     //for boolean the method is .nextbooleam()
    boolean boolValue = scanner.nextBoolean();  

    scanner.nextLine(); // Clear the buffer
    // for string the method is .nextline()
    System.out.print("Enter a string: ");
    String stringValue = scanner.nextLine(); 

    
    // Displaying the all of those inputs
    System.out.println("\n\nThe output is :");
    System.out.println("Integer value: " + intValue);
    System.out.println("Double value: " + doubleValue);
    System.out.println("Boolean value: " + boolValue);
    System.out.println("String value: " + stringValue);
    
    
    // Close the scanner when done
    scanner.close(); 



    System.out.println("\nBhai ko Thanks bhi bolna hota hy 😂😂😂😂😂🤣🤣🤣🤣🤣 q k comments k sath define bhi to kiya hy\n " );
    }
    
}
