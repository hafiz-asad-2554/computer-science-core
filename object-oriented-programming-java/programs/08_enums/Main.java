enum level{
    Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday
}
// enum is a user defined data type;

public class Main{
    public static void main(String[] args){
        level day1, day2, day3, day4, day5, day6, day7;// enum variable creation;
        day1 = level.Sunday; // assigning values to variables;
        day2 = level.Monday;
        day3 = level.Tuesday;
        System.out.println("ordinal " + day1.ordinal());// position/index of the variable in list of enums;
        System.out.println("name " + day3.name()); // name/value of variable;

        // tostring method is used to convert the data into string;
        String n1 = day1.toString(); // converting the enum to string data-type
        int len = n1.length();
        System.out.println("the length of our variable " + len);
        String n2 = n1.substring(0, 2); // extracting the substring from converted enum to string;
        System.out.println(n1 + "\n" + n2);

        // !NOTE we can check the length or can perform any method of string after tostring method;
        
        // printing values of enum;
    // for (level myvar : level.values()){
    //     System.out.println(myvar);
    // }
    }
}