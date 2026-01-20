import java.util.Scanner;
public class Main implements VCR {

    @Override
    public void play() {
        System.out.println("video has been playing........");
    }
    
    @Override
    public void Stop() {
        System.out.println("video is stoped now........");
    }
    
    @Override
    public void etc() {
        System.out.println("etc operations are performing (other operation)........");
    }
    
    public static void main(String[] args) {

        Scanner myScanner = new Scanner(System.in);
        System.out.println("to play : 1");
        System.out.println("to stop : 2");
        System.out.println("to perform other (etc) : 3");
        System.out.print("to perform specific task on video enter {1, 2, 3}");
        int num = myScanner.nextInt();
        Main myobj = new Main();

    
        switch (num) {
            case 1:
                myobj.play();
                break;
        
            case 2:
                myobj.Stop();
                break;
        
            case 3:
                myobj.etc();
                break;
        
            default:
                System.out.println("you intered invelid number");
                break;
        }

    }
    
}
