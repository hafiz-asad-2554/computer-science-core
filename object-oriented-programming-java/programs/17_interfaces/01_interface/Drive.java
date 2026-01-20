import java.util.Scanner;

public class Drive {
    Scanner scanlen = new Scanner(System.in);
    Scanner scancol = new Scanner(System.in);

    public static void line() {
        System.out.println("*****************************************");
    }

    public void settingLen() {
        System.out.println("enter length.");
        int length = scanlen.nextInt();
        LenImplimentation len = new LenImplimentation(length);
        System.out.println(len);
    }

    public void settingColor() {
        System.out.println("enter Color");
        String color = scancol.nextLine();
        ColorImplimentation col = new ColorImplimentation(color);
        System.out.println(col);
    }

    public void settingBoth() {
        System.out.println("enter length.");
        int length = scanlen.nextInt();
        System.out.println("enter Color");
        String color = scancol.nextLine();
        WholeImplimentations all = new WholeImplimentations(length, color);
        System.out.println(all);
    }

    public void invalid() {
        System.out.println();
        line();
        System.out.println(" Sorry! invalid choise");
        line();
    }

    public static void main(String[] multiverse) {

        Drive d = new Drive();
        line();
        System.out.println("*          enter you choise!            *");
        line();
        System.out.println();
        line();
        System.out.println("* 1. Adjust length \n* 2. Adjust Color \n* 3. Adjust Both ");
        line();
        System.out.println();

        Scanner scanChoise = new Scanner(System.in);
        int choise = scanChoise.nextInt();

        if (choise == 1) {
            d.settingLen();
        } else if (choise == 2) {
            d.settingColor();
        } else if (choise == 3) {
            d.settingBoth();
        } else {
            d.invalid();
        }
    }
}
