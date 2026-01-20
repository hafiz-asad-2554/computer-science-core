package midpractice.inheritence;

public class Animal {
    private int arms;
    private int legs;
    private String name;
    public static String  type;
    protected String area;


    public int getArms() {
        return arms;
    }
    public void setArms(int arms) {
        this.arms = arms;
    }
    public int getLegs() {
        return legs;
    }
    public void setLegs(int legs) {
        this.legs = legs;
    }
    public String getName() {
        return name;
    }
    public void setName(String name) {
        this.name = name;
    }
    // public static String getType() {
    //     return type;
    // }
    // public static void setType(String type) {
    //     Animal.type = type;
    // }




    public String toString()
    {
        String s = " the " + name + " is a "  + type + " have " + arms + " arms " + "and " + legs + " legs ";

        return s;
    }
    
}

