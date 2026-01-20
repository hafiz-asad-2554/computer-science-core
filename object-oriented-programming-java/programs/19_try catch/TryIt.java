import java.util.Scanner;

public class TryIt {
    public static void main(String[] args) throws Exception {
        String code;
        char zone;
        int district, valid = 0, banned = 0;

        Scanner scan = new Scanner(System.in);

        System.out.println("enter product code (enter exit to EXIT.)");
        code = scan.nextLine();

        while (!code.equals("exit")) {

            try {
                zone = code.charAt(9);
                district = Integer.parseInt(code.substring(3, 7));
                valid++;
                if (zone == 'R' && district > 2000) {
                    banned++;
                }
            } catch (StringIndexOutOfBoundsException exception) {
                System.out.println("improper length of code" + code);
            } catch (NumberFormatException exception) {
                System.out.println("district is not a number" + code);
            }
            System.out.println("enter product code (enter XXX to EXIT)");
            code = scan.nextLine();
        }
        System.out.println("number of valid codes entered " + valid);
        System.out.println("number of banned codes entered " + banned);
    }
}
