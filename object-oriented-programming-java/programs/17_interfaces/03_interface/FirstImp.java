public class FirstImp implements First, Second{
    private String Name;
    private int rollno;

    FirstImp(String n, int r){
        Name = n;
        rollno = r;
    }

    @Override
    public void setName(String n) {
        Name = n;
    }

    @Override
    public String getName() {
        return Name;
    }
    @Override
    public void setRollno(int roll) {
        rollno = roll;
    }
    @Override
    public int getRollno() {
        return rollno;
    }

    @Override
    public String toString() {
        String result = "name: " + Name + "\nrollno: " + rollno;
        return result;
    }
}
