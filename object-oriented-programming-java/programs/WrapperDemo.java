public class WrapperDemo {
    public static void main(String[] args) {
        Integer myInt = 5;
        Double myDouble = 5.99;
        Character myChar = 'A';
        
        System.out.println(myInt.intValue());
        System.out.println(myDouble.doubleValue());
        System.out.println(myChar.charValue());
        
        // Autoboxing and Unboxing happens automatically mostly
        String s = myInt.toString();
        System.out.println("Length of string '5': " + s.length());
    }
}
