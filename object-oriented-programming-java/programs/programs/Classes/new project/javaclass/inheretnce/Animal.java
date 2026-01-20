
public class Animal {
    private int arm;
    private int leg;
    private String color;
    private String name;
    protected String city;

    // Constructor
    public Animal(int a, int l, String c, String n) {
        arm = a;
        leg = l;
        color = c;
        name = n;
        city = "Bahawalnagar";
    }

    // Getters and setters
    public int getArm() {
        return arm;
    }

    public void setArm(int a) {
        arm = a;
    }

    public int getLeg() {
        return leg;
    }

    public void setLeg(int l) {
        leg = l;
    }

    public String getColor() {
        return color;
    }

    public void setColor(String c) {
        color = c;
    }

    public String getName() {
        return name;
    }

    public void setName(String n) {
        name = n;
    }

    // Other methods
    public void eat() {
        System.out.println(name + " is eating.");
    }

    public void sleep() {
        System.out.println(name + " is sleeping.");
    }

    // thanks to bnta hy yaro 
    // Other common functionalities can be added here
}
