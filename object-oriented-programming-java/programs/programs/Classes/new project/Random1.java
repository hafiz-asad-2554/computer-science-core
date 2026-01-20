import java.util.Random;
// it is necessary to import random pkg that is java.util.random

public class Random1 {
    public static void main(String[] args){
        
        Random random = new Random();   // it is necessary to create object and constructer of random class 

        // Generating random integers
        int randomInt = random.nextInt(); // Generats a random integer
        System.out.println("Random integer: " + randomInt);

        int boundRandomInt = random.nextInt(100); // Generates a random integer between 0 (inclusive) and 100 (exclusive)
        System.out.println("Random integer between 0 and 100: " + boundRandomInt);      /*  (max - min) + min     */

        // Generating random long values
        long randomLong = random.nextLong(); // Generates a random long value
        System.out.println("Random long: " + randomLong);

        // Generating random floats
        float randomFloat = random.nextFloat(); // Generates a random float value between 0.0 (inclusive) and 1.0 (exclusive)
        System.out.println("Random float: " + randomFloat);

        // Generating random doubles
        double randomDouble1 = random.nextDouble()*(0.5-0.2)+0.2; // Generates a random double value between 0.2 (inclusive) and 0.5 (exclusive)
        System.out.println("Random double: " + randomDouble1);
        double randomDouble = random.nextDouble(); // Generates a random double value between 0.0 (inclusive) and 1.0 (exclusive)
        System.out.println("Random double: " + randomDouble);

        // Generating random booleans
        boolean randomBoolean = random.nextBoolean(); // Generates a random boolean value (true or false)
        System.out.println("Random boolean: " + randomBoolean);


    }
    
}
