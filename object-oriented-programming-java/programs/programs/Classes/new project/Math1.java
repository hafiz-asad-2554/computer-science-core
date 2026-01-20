import java.lang.Math;

public class Math1 {
    public static void main(String[] args) {
    
           
    // Now there is math class mathods and functions

    // Absolute value
    int absolute = Math.abs(-10); // Returns the absolute value of a number
    System.out.println("Absolute value of -10: " + absolute);

    // Square root
    double squareRoot = Math.sqrt(25); // Returns the square root of a number
    System.out.println("Square root of 25: " + squareRoot);

    // Power
    double power = Math.pow(2, 3); // Returns the value of the first argument raised to the power of the second argument
    System.out.println("2 raised to the power of 3: " + power);

    // Trigonometric functions
    double sinValue = Math.sin(Math.PI / 2); // Returns the sine of an angle
    System.out.println("Sine of π/2: " + sinValue);
    double cosValue = Math.cos(Math.PI); // Returns the cosine of an angle
    System.out.println("Cosine of π: " + cosValue);
    double tanValue = Math.tan(Math.PI / 4); // Returns the tangent of an angle
    System.out.println("Tangent of π/4: " + tanValue);

    // Rounding
    double roundValue = Math.round(5.67); // Rounds the given number to the nearest whole number
    System.out.println("Rounded value of 5.67: " + roundValue);

    // Minimum and Maximum
    int min = Math.min(10, 20); // Returns the smaller of two numbers
    int max = Math.max(30, 25); // Returns the larger of two numbers
    System.out.println("Minimum of 10 and 20: " + min);
    System.out.println("Maximum of 30 and 25: " + max);


    }
    
}
