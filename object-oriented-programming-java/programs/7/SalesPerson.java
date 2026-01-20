public class SalesPerson {
    private String name;
    private String phoneNumber;
    private String assignedDistrict;
    private double[] dailySales;

    // Constructor with default daily sales set to zero
    public SalesPerson(String name, String phoneNumber, String assignedDistrict) {
        this.name = name;
        this.phoneNumber = phoneNumber;
        this.assignedDistrict = assignedDistrict;
        this.dailySales = new double[7];  // 7 days in a week
    }

    // Method to set daily sale amount for a specific day
    public void setDailyAmount(int day, double amount) {
        if (day >= 0 && day < 7) {
            dailySales[day] = amount;
        } else {
            System.out.println("Invalid day provided. Please use a number between 0 (Sunday) and 6 (Saturday).");
        }
    }

    // Method to get daily sale amount for a specific day
    public double getDailyAmount(int day) {
        if (day >= 0 && day < 7) {
            return dailySales[day];
        } else {
            System.out.println("Invalid day provided. Please use a number between 0 (Sunday) and 6 (Saturday).");
            return 0.0; // Returning 0 if an invalid day is provided
        }
    }

    // Method to calculate total sale amount for the week
    public double total() {
        double sum = 0;
        for (double dailySale : dailySales) {
            sum += dailySale;
        }
        return sum;
    }

    // Method to calculate average daily sale amount for the week
    public double average() {
        return total() / 7.0;
    }

    // toString method to print all details of the salesperson
    @Override
    public String toString() {
        return "SalesPerson{" +
                "name='" + name + '\'' +
                ", phoneNumber='" + phoneNumber + '\'' +
                ", assignedDistrict='" + assignedDistrict + '\'' +
                '}';
    }
}



