public class Parent{
    protected String sound = "blank", color = "transparent";
    protected int legs = 0, arms = 0;

    // public Parent(String s, String c, int l, int a){
    //     sound = s;
    //     color = c;
    //     legs = l;
    //     arms = a;
    // }

    public Parent(){
        
    }

    public void setsound(String s){
        sound = s;
    }
    
    public void setcolor(String c){
        color = c;
    }
    public void setlegs(int l){
        legs = l;
    }
    
    public void setarms(int a){
        arms = a;
    }
    
    public String getsound(){
        return sound;
    }
    
    public String getcolor(){
        return color;
    }
    
    public int getlegs(){
        return legs;
    }
    
    public int getarms(){
        return arms;
    }

    public String toString(){
        String results = "sound:" + sound + "\ncolor:" + color + "\nlegs:" + legs + "\narms:" + arms;
        return results;
    }
    

    public static void main(String[] args){
    // Parent parent = new Parent("heavy", "white", 2, 2);
    Parent parent = new Parent();
    // parent.setlegs(4);
    // System.out.println("after setlegs:" + parent.legs);
    System.out.println(parent);
    }
}