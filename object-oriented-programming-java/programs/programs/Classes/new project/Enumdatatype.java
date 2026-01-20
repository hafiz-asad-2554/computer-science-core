
// creatig user defined datatype with the help of enum keyword
// eaach datatype have its own data and it is limited but always depends on user 
enum Color {
    RED, GREEN, BLUE 
}

enum Month {
    JAN, FEB, MARCH, APRIL, MAY, JUNE, JULY, AUG, SEP, OCT, NOV, DEC
}

enum Day {
    SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY
}

enum Gendar {
    MALE, FEMALE
}




public class Enumdatatype{

public static void main(String[] args) {

    // datatype variabe-name = calling datatype value 
    // creating variable 
    Color a = Color.BLUE;
    Color b = Color.GREEN;
    Color c = Color.RED;
    System.out.println("tha color is in the variabe a :          " + a);
    System.out.println("tha color is in the variabe b :          " + b);
    System.out.println("tha color is in the variabe c :          " + c);


    Month aa = Month.JAN;
    Month bb = Month.FEB;
    Month cc = Month.MARCH;
    Month dd = Month.MAY;
    Month ee = Month.JUNE;
    Month ff = Month.JULY;
    Month gg = Month.AUG;
    Month hh = Month.SEP;
    Month ii = Month.OCT;
    Month jj = Month.NOV;
    Month kk = Month.DEC;

    System.out.println("the month name is in the variable aa :          " + aa);
    System.out.println("the month name is in the variable bb :          " + bb);
    System.out.println("the month name is in the variable cc :          " + cc);
    System.out.println("the month name is in the variable dd :          " + dd);
    System.out.println("the month name is in the variable ee :          " + ee);
    System.out.println("the month name is in the variable ff :          " + ff);
    System.out.println("the month name is in the variable gg :          " + gg);
    System.out.println("the month name is in the variable hh :          " + hh);
    System.out.println("the month name is in the variable ii :          " + ii);
    System.out.println("the month name is in the variable jj :          " + jj);
    System.out.println("the month name is in the variable kk :          " + kk);


    Day sun = Day.SUNDAY;       /*Day is the datatype as well as int, float, etc but it is user defined  */
    Day mon = Day.MONDAY;       /*sun, mon etc are the varialbe name. you can change them as you want */
    Day tue = Day.TUESDAY;      /*in the user defined datatype we can assign the values but limited that are defined in the first  */
    Day wed = Day.WEDNESDAY;
    Day thur = Day.THURSDAY;
    Day fri = Day.FRIDAY;
    Day sat = Day.SATURDAY;

    System.out.println("the day in in the variable sun:         " + sun);
    System.out.println("the day in in the variable mon:         " + mon);
    System.out.println("the day in in the variable tue:         " + tue);
    System.out.println("the day in in the variable wed:         " + wed);
    System.out.println("the day in in the variable thur:            " + thur);
    System.out.println("the day in in the variable fri:         " + fri);
    System.out.println("the day in in the variable sat:         " + sat);


    Gendar boy = Gendar.MALE;
    Gendar girl= Gendar.FEMALE;

    System.out.println("the value stored in the variable boy:           " + boy);
    System.out.println("the value stored in the variable girl:          " + girl);


}


}

