public class Main{
    public static void main(String[] args){

        // replace and replaceAll Method: to replace all the specified occurances
        String name = "Palm-O-yard OOO";
        String nameReplaced = name.replace("O", "i");
        System.out.println(nameReplaced);
        System.out.println();

        // toUpperCase returns the string with all letters with upper case;
        String upper = name.toUpperCase();
        System.out.println(upper);
        System.out.println();

        // toLowerCase coverts the string in to lower case;
        System.out.println("THIS IS NOT LOWER CASe".toLowerCase());
        System.out.println();

        // repaceFirst is used to replace only first occurance;
        String replacedFirst = name.replaceFirst("O", "_");
        System.out.println(replacedFirst);
        System.out.println();

        // charAt is used to get the character at the desired index;
        char charr = name.charAt(0);// zero is first index as it returns P;
        System.out.println("character at index 0: " + charr);
        System.out.println();

        //compareTo method checks whether they are same or not. it return 0 for same and negative/positive for notEqual.
        int comParison = name.compareTo(name); // self-comparison;
        System.out.println(comParison);
        System.out.println(name.compareTo(upper));
        System.out.println();

        // compareToIgnoreCase compares with concerning with case of string either they are upper, lower, or whatsoever; returning are same as compareTo method;
        System.out.println(name.compareToIgnoreCase(upper));
        System.out.println();

        // equals are as same as compareTo but they differ at return types; compare methods are int and equals are boolean;
        System.out.println("this".equals("this")); // true
        System.out.println("this".equals("that")); // false
        System.out.println("this".equals("THIS")); // false as it also check the cases of both strings or variables.
        System.out.println();

        // equalsIgnoreCase checks equality without discussing the strings cases
        System.out.println("this".equalsIgnoreCase("this")); //true
        System.out.println("this".equalsIgnoreCase("ThiS")); //true
        System.out.println("this".equalsIgnoreCase("Thiss")); //false
        System.out.println();

        // length method give the number of characters in a string.
        System.out.println("We are going to count the characters".length());
        System.out.println("I don't want to count you in".length());
        String counti = "focus please! we dicussed with both strings and string's variables";
        System.out.println(counti.length());
        System.out.println();

        // substring method: get the subset of a string as specified:- substring(starting point index, endpoint index - 1) the starting point is including  and the last is excluded;
        String substr = counti.substring(0, 14);
        System.out.println("substring: " + substr);
        System.out.println();
        
        // *****empty System.out.println(); method are meant for empty line in console*****


        String sentence = "123";
        int counting = Integer.parseInt(sentence);
        System.out.println(counting);

    }
}