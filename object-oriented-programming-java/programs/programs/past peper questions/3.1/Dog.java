public class Dog extends Animal{

    String dogcolor = super(Animal.getcolor());
    public Dog() {
    }

    public void showcolor(){

        System.out.println(dogcolor);
    }

    public static void main(String[] args) {

        Animal myanimal = new Animal();
        
        Dog myDog = new Dog();
        myDog.showcolor();
       
    }
    
}


