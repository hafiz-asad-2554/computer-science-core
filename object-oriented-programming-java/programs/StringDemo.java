public class StringDemo {
    public static void main(String[] args) {
        String s1 = "Java";
        String s2 = "Programming";
        
        // Concat
        System.out.println(s1.concat(" ").concat(s2));
        
        // Length
        System.out.println("Length of s2: " + s2.length());
        
        // Substring
        System.out.println("Substring: " + s2.substring(0, 4));
        
        // Case
        System.out.println("Upper: " + s1.toUpperCase());
        System.out.println("Lower: " + s2.toLowerCase());
    }
}
