abstract class Shape {
    abstract void draw();
}

class Rectangle extends Shape {
    void draw() {
        System.out.println("Drawing Rectangle");
    }
}

class Circle1 extends Shape {
    void draw() {
        System.out.println("Drawing Circle");
    }
}

public class AbstractionDemo {
    public static void main(String[] args) {
        Shape s = new Circle1();
        s.draw();
        s = new Rectangle();
        s.draw();
    }
}
