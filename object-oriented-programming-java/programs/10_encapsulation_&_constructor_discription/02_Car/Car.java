// class car
public class Car{ //start of class
    private String name, color;
    private int model;
    private double price;
    private static int tyres = 4;

    // constructor(perimeterized)
    public Car(String n, String c, int m, double p){
        name = n;
        color = c;
        model = m;
        price = p;
    }

    // mutators
    public void setname(String n){
        name = n;
    }
    public void setcolor(String c){
        color = c;
    }
    public void setmodel(int m){
        model = m;
    }
    public void setprice(double p){
        price = p;
    }

    

    // accessors
    public String getname(){
        return name;
    }
    public String getcolor(){
        return color;
    }
    public int getmodel(){
        return model;
    }
    public double getprice(){
        return price;
    }

    // toString method
    public String toString(){ //starting toString()
        String result = "Final resuts \nThe color of car: " + getcolor() + "\nThe name of car: "+ getname() + "\nThe model of car is: " + getmodel() + "\nThe price of car is: " + getprice() + "$";
        return result;
    } // ending toString

    // main method.
    public static void main(String[] args){ //start of main()

        Car isuzu = new Car("RockStar", "Blue", 350, 438234789);

        // if the constructor is perimetrized then we must have to define the perimeters while creating object otherwise we have to leave the constructor's paranthesis empty and if paranthesis are empty then we can use the accessors and mutators to set and get the values.

        // isuzu.setcolor("blue");
        // isuzu.setmodel(1998);
        // isuzu.setname("bolt");
        // isuzu.setprice(5345327.5);

        // System.out.println("color:"+ isuzu.getcolor());
        // System.out.println("model:"+ isuzu.getmodel());
        // System.out.println("name:"+ isuzu.getname());
        // System.out.println("price:"+ isuzu.getprice());

        // if we print the object of our class then it will perform the toString method and for this condition the constructor should be perimetrized and toString method be defined. 
        System.out.println(isuzu);
    } // end of main()
} //end of class