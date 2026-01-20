
public class Main {
    public static void main(String[] args) {
        Dog myDog = new Dog(0, 4, "Brown", "Jackle");
        System.out.println(myDog.getName() + " has " + myDog.getArm() + " arms and " + myDog.getLeg() + " legs.");
        myDog.eat();
        myDog.sleep();
        myDog.bark();
    }
}
