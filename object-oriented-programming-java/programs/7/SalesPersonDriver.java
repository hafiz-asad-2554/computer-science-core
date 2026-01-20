public class SalesPersonDriver {
    public static void main(String[] args) {
        // Creating a SalesPerson object with default daily sales set to zero
        SalesPerson salesPerson = new SalesPerson("John Doe", "123-456-7890", "North District");

        // Setting daily sale amounts for the week
        salesPerson.setDailyAmount(0, 150.0); // Sunday
        salesPerson.setDailyAmount(1, 200.0); // Monday
        salesPerson.setDailyAmount(2, 180.0); // Tuesday
        salesPerson.setDailyAmount(3, 250.0); // Wednesday
        salesPerson.setDailyAmount(4, 220.0); // Thursday
        salesPerson.setDailyAmount(5, 300.0); // Friday
        salesPerson.setDailyAmount(6, 170.0); // Saturday

        // Printing salesperson details
        System.out.println("Salesperson Details:");
        System.out.println(salesPerson);

        // Printing daily sale amounts
        for (int day = 0; day < 7; day++) {
            System.out.println("Day " + day + ": " + salesPerson.getDailyAmount(day));
        }

        // Printing total and average sale amounts for the week
        System.out.println("Total Sale Amount for the Week: " + salesPerson.total());
        System.out.println("Average Daily Sale Amount for the Week: " + salesPerson.average());
    }
}