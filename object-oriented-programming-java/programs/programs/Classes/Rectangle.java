public class Rectangle {
    // Properties
    private double length;
    private double width;
    private String color;

    // Constructors
    public Rectangle() {
        // Default constructor
    }

    public Rectangle(double length, double width, String color) {
        this.length = length;
        this.width = width;
        this.color = color;
    }

    // Getter methods (optional)
    public double getLength() {
        return length;
    }

    public double getWidth() {
        return width;
    }

    public String getColor() {
        return color;
    }

    // Setter methods
    public void setLength(double length) {
        this.length = length;
    }

    public void setWidth(double width) {
        this.width = width;
    }

    public void setColor(String color) {
        this.color = color;
    }

    //main method
    public static void main(String[] args) {
        // Create a rectangle object
        Rectangle myRectangle = new Rectangle(5.0, 3.0, "Blue");

        // the initial properties
        System.out.println("Initial properties:");
        System.out.println("Length: " + myRectangle.getLength());
        System.out.println("Width: " + myRectangle.getWidth());
        System.out.println("Color: " + myRectangle.getColor());

        // new values for the properties
        myRectangle.setLength(7.5);
        myRectangle.setWidth(4.2);
        myRectangle.setColor("Red");

        // the updated properties
        System.out.println("\nUpdated properties:");
        System.out.println("Length: " + myRectangle.getLength());
        System.out.println("Width: " + myRectangle.getWidth());
        System.out.println("Color: " + myRectangle.getColor());
    }
}
