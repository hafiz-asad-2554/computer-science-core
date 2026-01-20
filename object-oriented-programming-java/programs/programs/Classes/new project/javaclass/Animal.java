public class Animal {
    private String name;
    protected int age;
    
    public Animal(String n, int a) {
        name = n;
        age = a;
    }
    
    public void speak() {
        System.out.println("The animal makes a sound.");
    }
    
    public void eat() {
        System.out.println("The animal is eating.");
    }
    
    public String getName() {
        return name;
    }
    
    public int getAge() {
        return age;
    }
}
