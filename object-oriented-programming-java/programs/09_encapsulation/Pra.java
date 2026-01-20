public class Pra{

    private int legs;
    private int arms ;
    private String color;

    public Pra(int l, int a, String c){
        legs = l;
        arms = a;
        color = c;
    }
    
    public String toString(){
        String result = "the legs are " + legs + " and arms are " + arms + " and the color is " + color;
        return result;
    }
    

    public static void main(String[] args){
    Pra p1 = new Pra(3, 4, "brown");
    System.out.println(p1);
    }

}