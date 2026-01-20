import java.util.ArrayList;

class Product {
    int id;
    String name;
    double price;
    int quantity;

    Product(int i, String n, double p, int q) {
        id = i; name = n; price = p; quantity = q;
    }

    void display() {
        System.out.println(id + ". " + name + " | $" + price + " | Stock: " + quantity);
    }
}

public class InventoryApp {
    public static void main(String[] args) {
        ArrayList<Product> inventory = new ArrayList<>();
        
        inventory.add(new Product(1, "Laptop", 800.0, 10));
        inventory.add(new Product(2, "Mouse", 20.0, 50));
        inventory.add(new Product(3, "Keyboard", 50.0, 30));

        System.out.println("--- Current Inventory ---");
        double totalValue = 0;
        for (Product p : inventory) {
            p.display();
            totalValue += (p.price * p.quantity);
        }

        System.out.println("\nTotal Inventory Value: $" + totalValue);
    }
}
