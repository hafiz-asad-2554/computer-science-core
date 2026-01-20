class User {
    String username;
    User(String u) { username = u; }
    void login() { System.out.println(username + " logged in."); }
}

class Customer extends User {
    Customer(String u) { super(u); }
    void placeOrder() { System.out.println(username + " placed an order."); }
}

class Admin extends User {
    Admin(String u) { super(u); }
    void addProduct() { System.out.println(username + " added a new product."); }
}

public class EcommerceBackend {
    public static void main(String[] args) {
        User u1 = new Customer("john_doe");
        User u2 = new Admin("super_admin");
        
        u1.login();
        ((Customer)u1).placeOrder(); // Casting
        
        u2.login();
        ((Admin)u2).addProduct();
    }
}
