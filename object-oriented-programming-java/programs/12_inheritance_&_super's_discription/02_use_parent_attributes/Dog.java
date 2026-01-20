public class Dog extends Animal1{
    private String color = "black";

    public void display(){
        System.out.println("child color: " + color);
        System.out.println("parent color: " + super.color);
    }
}