import java.util.Scanner;

public class Broken implements Breakable{

    public boolean isObjectBrocken = false;
    

    // public Broken(boolean obj ){
    //     isObjectBrocken = obj;
    // }


    public boolean Break()
    {
        System.out.println("object is breaking ///////.......... loding...");
        return true;
                
    }

    public boolean broken()
    {
        System.out.println("object is broken now.");
        return true;

    }

    public static void main(String[] args) {
        Scanner mScanner = new Scanner(System.in);
        System.out.println("if you want to brack the object .... write \"true\" : ");
        boolean choise = mScanner.nextBoolean();
        // boolean choise = true; 
        if (choise ==  true) {
            Broken breaking = new Broken(choise);
            breaking.Break();
            breaking.broken();

        } 
        else {

            System.out.println("its ok if you don't want to break any thing then it good habbit ..");
            
        }


        

    }
    
}
