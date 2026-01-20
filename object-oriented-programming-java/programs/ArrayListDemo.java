import java.util.ArrayList;
import java.util.Collections;

public class ArrayListDemo {
    public static void main(String[] args) {
        ArrayList<String> cars = new ArrayList<String>();
        cars.add("Volvo");
        cars.add("BMW");
        cars.add("Ford");
        cars.add("Mazda");
        
        System.out.println("Unsorted: " + cars);
        
        Collections.sort(cars);
        
        System.out.println("Sorted: " + cars);
        
        // Iterating
        for (String i : cars) {
            System.out.println(i);
        }
    }
}
