// sometimes we have to use the objects intead of premitive data type then we use wraper class;
// wraper class provide protection to data (makes the data secure);
// autoboxing and unboxing processes are acceptable for equvilant type of wraper and variable.

public class Wrapper{
    public static void main(String[] args){
    Integer ageObj = new Integer(21);
    int age = ageObj;
    System.out.println("variable with value of objects: " + age);
    String str = "11";
    int firstAge = Integer.parseInt(str); // inverse of string's tostring method that converts the string data to int;
    System.out.println(firstAge + 11); // test.

    // giving value to wraper object is called autoboxing
    // extracting value from object called unboxing

    // another example;
    Integer wrap; 
    int x = 50;
    wrap = x; // autoboxing.(automated Integer object is created)
    System.out.println(wrap);

    Integer obj1 = new Integer(32);
    int t = obj1; // unboxing.(automatically value extracted.)
    System.out.println(t);

    // now pass through the both's examples
    // in autoboxing we have a value of variable and we pass it to wraper object.(we gave the value to object.)
    // autoboxing
    Boolean isProgramingFun;
    boolean bool = false;
    isProgramingFun = bool;
    System.out.println(isProgramingFun);


    // in unboxing we have a value of wraper object and gave it to variable.(we got the value from object)
    // un-boxing
    Character getest = new Character('a');
    char got = getest;
    System.out.println(got);

    Integer bil = new Integer(0);
    int c = bil;
    System.out.println(c);


    }
}