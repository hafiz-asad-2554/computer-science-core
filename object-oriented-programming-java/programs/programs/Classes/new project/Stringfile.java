// pkg file of string methods is java.lang that is not necessary to import

public class Stringfile{

    public static void main(String[] args) {


        //it is not necessary to create object or constractor of String 


        // creating a variable name by str
        String str = "Hafiz Muhammad Asad ";
        System.out.println("First String is: " + str);


        // finding Length by method .length()
        int length = str.length(); //length is a variable in which length of string is stored
        System.out.println("Length of the string: " + length);


        String anotherStr = "Mustafa";  //creating a variable by named anotherstr 
        System.out.println("Secound String: " + anotherStr);
        

        // Concatenation can use to marge two strings but it will store is another string
        String concat = str.concat(anotherStr); // Concatenates two strings str and anotherstr and stored in concate named variable
        System.out.println("Concatenated string: " + concat); // printing the string variable named concate 


        // Character at an index
        char charAtIndex = str.charAt(4); // Returns the character at the specified index stored at charAtIndux
        System.out.println("Character at index 4: " + charAtIndex);


        // Substring in the method of string used to grt the specified string
        String subStr = str.substring(5); // Returns a substring starting from the specified index
        System.out.println("Substring from index 5: " + subStr); //
        String subStrRange = str.substring(5, 15); // Returns a substring within the specified range of indexes
        System.out.println("Substring from index 5 to 15: " + subStrRange);


        // Index of a character
        int indexOfChar = str.indexOf('M'); // Returns the index of the first occurrence of a character
        System.out.println("Index of 'M': " + indexOfChar);


        // Index of a substring
        int indexOfSubStr = str.indexOf("Asad"); // Returns the index of the first occurrence of a substring
        System.out.println("Index of 'Asad': " + indexOfSubStr);


        // Conversion to lowercase and uppercase
        String lowerCase = str.toLowerCase(); // Converts the string to lowercase
        System.out.println("Lowercase string: " + lowerCase);
        String upperCase = str.toUpperCase(); // Converts the string to uppercase
        System.out.println("Uppercase string: " + upperCase);


        // Replacing charecter 
        String newstr = "kkkkkkkkk";
        System.out.println("string : " + newstr);
        String replacedStr = newstr.replace('k', 'H'); // Replaces all occurrences of a character
        System.out.println("String with replaced characters: " + replacedStr);


        //Replacing subsring
        String replacedStr2 = str.replace("Asad", " RAO"); // Replaces all occurrences of a substring
        System.out.println("String with replaced substring: " + replacedStr2);


        String stringWithSpaces = "  Hello  ";
        String trimmedStr = stringWithSpaces.trim(); //it will Removes leading and trailing whitespace
        System.out.println("Trimmed string: " + trimmedStr);


        System.out.println("Bhai ko Thanks bhi bolna hota hy 😂😂😂😂😂🤣🤣🤣🤣🤣 q k comments k sath define bhi to kiya hy " );
    }
}
