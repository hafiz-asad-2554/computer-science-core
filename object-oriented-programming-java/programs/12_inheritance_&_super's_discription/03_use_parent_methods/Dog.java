public class Dog extends Animal2{
    void sleep(){
        System.out.println("sleeping");
    }

    void bark(){
        System.out.println("barking");
    }

    void work(){
        super.sleep();
        bark();
    }
}