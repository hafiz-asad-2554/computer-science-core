import java.util.Scanner;

public class Dhaba {
    Scanner quanScanner = new Scanner(System.in);

    public int dealings(String itemF, int priceF) {
        System.out.println("enter quantity");
        int quantityF = quanScanner.nextInt();
        System.out.println("you chose " + quantityF + " " + itemF);
        System.out.println("the price of single item is Rs." + priceF);
        return (quantityF * priceF);
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        Dhaba d = new Dhaba();
        Scanner scan1 = new Scanner(System.in);

        String[] items = { "Burger", "Shawarma", "Pizza", "Chawal cholay", "Naan Chicken" };
        int[] prices = { 250, 150, 1300, 250, 300 };
        int rate = 0, total_price = 0, menu = 0;
        int num = 1;

        System.out.println("wellcome to our dhaba");
        System.out.println("enter your choice");

        while (num == 1) {

            for (int x = 0; x <= (items.length - 1); x++) {
                // for(int x = 0; x < item.length; x++) operator difference;
                System.out.println((x + 1) + ". " + items[x] + " => " + prices[x]);
            }
            menu = scan.nextInt();

            switch (menu) {
                case 1:
                    rate = d.dealings(items[0], prices[0]);
                    break;
                case 2:
                    rate = d.dealings(items[1], prices[1]);
                    break;
                case 3:
                    rate = d.dealings(items[2], prices[2]);
                    break;
                case 4:
                    rate = d.dealings(items[3], prices[3]);
                    break;
                case 5:
                    rate = d.dealings(items[4], prices[4]);
                    break;
                default:
                    System.out.println("sorry invalid choise!");
                    break;
            }
            System.out.println("press 1 for your next choice\nPress 5 to get your bill");
            num = scan1.nextInt();
            total_price += rate;
        }
        System.out.println("total amount of your bill is Rs." + total_price);
    }
}
