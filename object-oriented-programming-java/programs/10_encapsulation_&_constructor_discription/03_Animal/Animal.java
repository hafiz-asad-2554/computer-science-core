public class Animal{
    private int legs,arms;
    private String color, sound;

    public Animal(int l, int a, String c, String s){
        legs = l;
        arms = a;
        color = c;
        sound = s;
    }

    public void setlegs(int l){
        legs = l;
    }
    public void setarms(int a){
        arms = a;
    }
    public void setcolor(String c){
        color = c;
    }
    public void setsound(String s){
        sound = s;
    }

    public int getlegs(){
        return legs;
    }
    public int getarms(){
        return arms;
    }
    public String getcolor(){
        return color;
    }
    public String getsound(){
        return sound;
    }

    public String toString(){
        String result = "it has \"" + legs + "\" legs and \"" + arms + "\" arms. it's sound is \"" + sound + "\" and it's color is \"" + color + "\""; 
        return result;
    }

    public static void main(String[] args){
        Animal bull = new Animal(2, 2, "red", "hero-sound");
        System.out.println(bull);

        bull.setarms(2);
        bull.setlegs(2);
        bull.setcolor("red");
        bull.setsound("haaaaa");

        System.out.println("legs" + bull.getlegs());
        System.out.println("arms" + bull.getarms());
        System.out.println("color" + bull.getcolor());
        System.out.println("sound" + bull.getsound());

        System.out.print(bull); // it only calls the toString method();
    }
}