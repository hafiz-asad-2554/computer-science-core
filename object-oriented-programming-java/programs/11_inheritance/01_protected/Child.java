public class Child extends Parent{    
    private int free = 2;

    public String toString(){
        String results = super.toString() + "\nfree: " + free;
        return results;
    }
    

    public static void main(String[] args){
        // Child child = new Child(2, 2, "pitch", "red");
        Child child = new Child();
        // Parent Pare = new Parent();
        // System.out.println(child.legs);
        // System.out.println("after set method:" + child.getlegs());
        // System.out.println("parent info\n" + Pare);
        // Pare.setlegs(5);
        child.setlegs(4);
        // System.out.println(child.getlegs());
        // System.out.println(Pare.getlegs());
        System.out.println("this is child's information\n" + child);
    }
}