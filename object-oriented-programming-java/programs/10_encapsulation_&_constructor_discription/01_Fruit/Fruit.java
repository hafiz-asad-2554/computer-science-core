public class Fruit{ // start of class
    private int price;

    public Fruit(){} // default constructor

    public void setprice(int p){ // mutator 
        price = p;
    }

    public int getprice(){ // accessor
        return price;
    }

    public String toString(){
        String result = "the price is " + price;
        return result;
    }
    

    public static void main(String[] args){ // main begins

        System.out.println("first Fruit.");
        Fruit A = new Fruit();
        A.setprice(3);
        // A.setprice(45); // set value using mutator of Fruit
        // System.out.println("price: " + A.getprice());
        System.out.println(A);
    } // end of main
} // end of class Fruit