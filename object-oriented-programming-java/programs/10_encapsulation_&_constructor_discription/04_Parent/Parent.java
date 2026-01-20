public class Parent{
    private int legs,arms;
    private String sound;
    private String language;

    public Parent(int l, int a, String s, String lan){
        legs = l;
        arms = a;
        sound = s;
        language = lan;        
    }

    public void setlegs(int l){
        legs = l;
    }
    public void setarms(int a){
        arms = a;
    }
    public void setsound(String s){
        sound = s;
    }
    public void setlanguage(String lan){
        language = lan;
    }
    
    public int getlegs(){
        return legs;
    }
    public int getarms(){
        return arms;
    }
    public String getsound(){
        return sound;
    }
    public String getlanguage(){
        return language;
    }
    
    public String toString(){
        String resutls = "the legs of parent: " + legs + " the arms of parent " + arms + " the sound of parent " + sound + " the language of parent " + language;
        return resutls;
    }
    
    
    public static void main(String[] args){
    Parent par = new Parent(2, 2, "heavy", "Embako");
    System.out.println(par);
    
    }
}