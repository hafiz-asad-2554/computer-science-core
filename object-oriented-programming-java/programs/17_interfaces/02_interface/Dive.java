public class Dive implements First{
    
    public String name;
    public int age, RegNum, ident;

    Dive(String n, int a, int reg, int id) {
        name = n;
        age = a;
        RegNum = reg;
        ident = id;
    }

    @Override
    public void setname(String n) {
        name = n;
    }
    @Override
    public void setage(int a) {
        age = a;
    }
    @Override
    public void setRegNum(int RegN) {
        RegNum = RegN;
    }
    @Override
    public void setID(int id) {
        ident = id;
    }

    @Override
    public String getname() {
        return name;
    }
    @Override
    public int getage() {
        return age;
    }
    @Override
    public int getRegNum() {
        return RegNum;
    }
    @Override
    public int getID() {
        return ident;
    }

    @Override
    public String toString() {
        String results = "Name: " + name + "\nAge: " + age + "\nRegistration Number: " + RegNum + "\nidentity: " + ident;
        return results;
    }

    public static void main(String[] args) {
        Dive obj = new Dive("this name", 21, 44533, 3110103);
        System.out.println(obj);
    }
}
