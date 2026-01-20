import java.util.Scanner;

// must create object;
public class Main {
    public static void main(String[] args) {

        Scanner scani = new Scanner(System.in);
        int rollNo;
        String name;
        System.out.println("enter your name");
        name = scani.nextLine();
        System.out.println("enter your roll number");
        rollNo = scani.nextInt();
        String finall = name + " " + rollNo;
        System.out.println(finall);

    }
}