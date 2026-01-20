public class Emp extends Person{
    private float salary;

    public Emp(int i, String n, float s){
        super(i, n);
        salary = s;

    }
    public void display(){
        System.out.println(name + " " + identityNo + " " + salary);
    }
}