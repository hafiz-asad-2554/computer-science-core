import java.util.Scanner;

public class Ex_finding_avg {

    //average of two integers (7.1);
    float average(int a, int b){
        return (a+b)/2;
    }
    //average of three integers (7.2);
    float average(int a, int b, int c){
        return (a+b+c)/3;
    }
    //average of four integers  (7.3);
    float average(int a, int b, int c, int d){
        return (a+b+c+d)/4;
    }

    public static void main(String[] args) {
        Ex_finding_avg myEx = new Ex_finding_avg();
        Scanner myScanner = new Scanner(System.in);
        
        int a, b, c, d;

        //getting the values from the user;
        System.out.print("input the first number:");
        a = myScanner.nextInt();
        System.out.print("input the secound number:");
        b = myScanner.nextInt();
        System.out.println("The average of two numbers: " + myEx.average(a, b));
        
        
        //getting the values from the user;
        System.out.print("input the first number:");
        a = myScanner.nextInt();
        System.out.print("input the secound number:");
        b = myScanner.nextInt();
        System.out.print("input the third number:");
        c = myScanner.nextInt();
        System.out.println("The average of three numbers: " + myEx.average(a, b, c));
        
        //getting the values from the user;
        System.out.print("input the first number:");
        a = myScanner.nextInt();
        System.out.print("input the secound number:");
        b = myScanner.nextInt();
        System.out.print("input the third number:");
        c = myScanner.nextInt();
        System.out.print("input the fouth number:");
        d = myScanner.nextInt();
        System.out.println("The average of four numbers: " + myEx.average(a, b, c, d));
        
        


    }

}