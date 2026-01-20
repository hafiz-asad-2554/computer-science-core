import java.util.Scanner;

/**
 * Main
 */
public class Main {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        Scanner scan1 = new Scanner(System.in);
        Scanner quanScanner = new Scanner(System.in);
        int rate = 0, price = 0, total_price = 0, menu = 0, quantity = 0;
        int num = 1;

        System.out.println("wellcome to our dhaba");
        System.out.println("enter your choice");

        while (num == 1) {
            System.out.println("1. Burger\n2. shawrma\n3. pizza\n4. chawal_cholay\n5. naan_chicken\n");
            menu = scan.nextInt();

            switch (menu) {
                case 1:
                    System.out.println("enter quantity");
                    quantity = quanScanner.nextInt();
                    System.out.println("you chose " + quantity + "burgers");
                    price = 250;
                    System.out.println("the price of single item is Rs." + price);
                    rate = quantity * price;
                    break;
                case 2:
                    System.out.println("enter quantity");
                    quantity = quanScanner.nextInt();
                    System.out.println("you chose " + quantity + " shawarma");
                    price = 180;
                    System.out.println("price of single item is Rs." + price);
                    rate = quantity * price;
                    break;
                case 3:
                    System.out.println("enter quantity");
                    quantity = quanScanner.nextInt();
                    System.out.println("you chose " + quantity + " pizza");
                    price = 1300;
                    System.out.println("the price of single item is Rs." + price);
                    rate = quantity * price;
                    break;
                case 4:
                    System.out.println("enter quantity");
                    quantity = quanScanner.nextInt();
                    System.out.println("you chose " + quantity + "chawal cholay");
                    price = 250;
                    System.out.println("the price of single item is Rs." + price);
                    rate = quantity * price;
                    break;
                case 5:
                    System.out.println("enter quantity");
                    quantity = quanScanner.nextInt();
                    System.out.println("you chose " + quantity + " naan chicken");
                    price = 300;
                    System.out.println("the price of single item is Rs." + price);
                    rate = quantity * price;
                    break;
                default:
                    System.out.println("Sorry! The entered choice is invalid");
                    continue;
            }
            System.out.println("press 1 for your next choice\npress 5 to get bill");
            num = scan1.nextInt();
            total_price += rate;
        }
        System.out.println("total amount of your order is Rs." + total_price);

    }
}