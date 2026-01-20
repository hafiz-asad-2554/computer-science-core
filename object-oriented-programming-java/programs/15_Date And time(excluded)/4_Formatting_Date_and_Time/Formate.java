import java.time.LocalDateTime;
import java.time.format.DateTimeFormatter;

public class Formate{
    public static void main(String[] args){
    LocalDateTime ldate = LocalDateTime.now();
    System.out.println("before format:" + ldate);
    DateTimeFormatter fdate = DateTimeFormatter.ofPattern("\"E, dd MMM yyyy\" (HH:mm:ss)");
    String formatteddate = ldate.format(fdate);
    System.out.println("after format:" + formatteddate);
    }
    // .ofPattern ways:
    // yyyy-MM-dd (1988-09-23);
    // dd/MM/yyyy (29/09/1998);
    // dd-MMM-yyyy (29-Sep-1988);
    // E, MMM dd yyyy (Thu, Sep 28 1899);
}