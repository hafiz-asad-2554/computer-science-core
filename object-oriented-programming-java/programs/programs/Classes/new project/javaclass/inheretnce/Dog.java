
public class Dog extends Animal {
    // Constructor
    public Dog(int arm, int leg, String color, String name) {
        super(arm, leg, color, name);
    }

    // Additional methods specific to Dog can be added here
    public void bark() {
        System.out.println(getName() + " is barking.");
    }
}
