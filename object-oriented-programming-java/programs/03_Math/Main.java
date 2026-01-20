import java.lang.Math;
// precausion! keep all medicne out a reach of childern;

public class Main{
    public static void main(String[] args){

        // exponentials
        System.out.println("power method: " + Math.pow(3,2));
        System.out.println("square_roots: " + Math.sqrt(9));
        System.out.println("cube_root: " + Math.cbrt(27.0));

        // angular conversions;
        System.out.println("value of PI" + Math.PI);
        System.out.println("from radians to degrees: " + Math.toDegrees(1));
        System.out.println("from degrees to_radians: " + Math.toRadians(57.2958));

        // round-off the numbers
        System.out.println("floor method: " + Math.floor(2.2)); // (it gives the greatest whole number less then 'n')
        System.out.println("ceil method: " + Math.ceil(2.2)); // (it return the smallest whole number greater then 'n')

        // abs always removes the symbol of the value and return a positive number ;
        System.out.println("absolute value: " + Math.abs(-5.59832e4));
        System.out.println(Math.abs(-10) + Math.abs(10)); // gives 20 in return;

        // trignometry functions
        System.out.println("cos 0 : " + Math.cos(0));
        System.out.println("sin 90: " + Math.sin(90));
        System.out.println("tan 45: " + Math.tan(45));
        System.out.println();

        // hyperbolic functions
        System.out.println("cosh 0 : " + Math.cosh(0));
        System.out.println("sinh 90: " + Math.sinh(90));
        System.out.println("tanh 45: " + Math.tanh(45));
        System.out.println();

        // arc functions;
        System.out.println("acos 0 : " + Math.acos(0));
        System.out.println("asin 39: " + Math.asin(39));
        System.out.println("atan 45: " + Math.atan(45));

        // log methods
        System.out.println("(log10) log with base 10: " + Math.log10(43.3253));
        System.out.println("log: " + Math.log(43.3253));

        
        // System.out.println("nextUp" + Math.nextUp(34.4));
        // System.out.println("e^x - 1: " + Math.expm1(4));
        // System.out.println("nextAfter" + Math.nextAfter(4, 7));
        // System.out.println("unit of least Precision: " + Math.ulp(4));
        // System.out.println(10*Math.exp(2));// returns the value of "E"^x .
    }
}