import java.util.Scanner;

public class Main2 {
    public boolean isvisiable;

    public Main2(boolean b) {
        //TODO Auto-generated constructor stub
    }


    public boolean Main2(boolean visibility){
        return isvisiable = visibility;
    }

    
    public boolean makevisible(){
        if (!isvisiable) {
            isvisiable = true;
            return isvisiable;
        }
        else{
            return false;
        }
    }
    public boolean makeinvisible(){
        if (!isvisiable) {
            isvisiable = true;
            return isvisiable;
        }
        else{
            return false;
        }
    }

    public static void main(String[] args) {
        
        Scanner myScanner = new Scanner(System.in);
        boolean visibilityobj = myScanner.nextBoolean();
        

        Main2  myvisibilityobj = new Main2(visibilityobj);
        
        if (visibilityobj) {
            
            System.out.println("now  it is visible");
            myvisibilityobj.makevisible();
            
        } else {
            
            System.out.println("now  it is invisible");
            myvisibilityobj.makeinvisible();

        }    


    }
    
    
}
