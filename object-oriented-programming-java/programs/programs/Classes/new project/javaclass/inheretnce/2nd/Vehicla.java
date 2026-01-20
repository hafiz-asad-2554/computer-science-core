// Parent class
class Vehicle {
    protected String brand;
    protected int year;

    public Vehicle(String brand, int year) {
        this.brand = brand;
        this.year = year;
    }

    public void displayInfo() {
        System.out.println("Brand: " + brand);
        System.out.println("Year: " + year);
    }
}

// Child class inheriting from Vehicle
class Car extends Vehicle {
    private int numberOfDoors;

    public Car(String brand, int year, int numberOfDoors) {
        super(brand, year); // Calling the parent class constructor
        this.numberOfDoors = numberOfDoors;
    }

    public void displayInfo() {
        super.displayInfo(); // Calling the parent class method
        System.out.println("Number of doors: " + numberOfDoors);
    }
}

// Main class
public class InheritanceExample {
    public static void main(String[] args) {
        Car car = new Car("Toyota", 2020, 4);
        car.displayInfo();
    }
}
