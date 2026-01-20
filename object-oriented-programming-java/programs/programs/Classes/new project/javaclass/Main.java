public class Main {
    public static void main(String[] args) {
        Animal animal = new Animal("Generic Animal", 5);
        animal.speak();  // Output: The animal makes a sound.
        animal.eat();    // Output: The animal is eating.
        
        Dog dog = new Dog("jackle", 3);
        
        dog.speak();     // Output: Buddy barks.
        dog.eat();       // Output: Buddy is eating bones.
    }
}
