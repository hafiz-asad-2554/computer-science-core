public class Table{

    // attributes of Table;
    private int legs, arms;
    private String color;

    // default constructor of Table; (empty constructor)
    public Table(){
        
    }
    
    // setters or mutators
    public void setlegs(int l){
        legs = l;
    }
    
    public void setarms(int a){
        arms = a;
    }
    
    public void setcolor(String c){
        color = c;
    }
    
    // getter or accessors
    public int getlegs(){
        return legs;
    }
    
    public int getarms(){
        return arms;
    }
    
    public String getcolor(){
        return color;
    }

    public String toString(){
        String result = "the legs are: " + legs + "\nthe arms are: " + arms + "\nthe color is: " + color;
        return result;
    }
    
    
    // main method
    public static void main(String[] args){
    Table tab = new Table();
    tab.setlegs(2);
    tab.setarms(2);
    tab.setcolor("Brown");
    System.out.println(tab);

    // System.out.println("Legs: " + tab.getlegs());
    // System.out.println("Arms: " + tab.getarms());
    System.out.println("Color: " + tab.getcolor());

    // System.out.println(tab.legs); it is same as above statement (we can use either get methods or name of attribute);

    }
}