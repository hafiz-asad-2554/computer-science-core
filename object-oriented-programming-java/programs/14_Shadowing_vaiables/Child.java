// here the gate attribute is same in parent and child class and this is shodowing vaiable !NOTE not appreciated.
// the same variables should be inherit by protected 
public class Child extends Parent{

    public Child(int g){
        super(g);
    }
    

    public static void main(String[] args){
        Child c = new Child(4);
        Parent p = new Parent(8);
        System.out.println(c.gate);
        System.out.println(p.gate);
    }
}