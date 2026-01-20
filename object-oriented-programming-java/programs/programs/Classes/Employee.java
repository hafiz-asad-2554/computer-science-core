public class Employee {
    // Properties
    private String name;
    private String department;
    private String title;
    private double salary;

    // Constructor
    public Employee(String name, String department, String title, double salary) {
        this.name = name;
        this.department = department;
        this.title = title;
        this.salary = salary;
    }

    // Operations
    public void setDepartment(String department) {
        this.department = department;
    }

    public void setTitle(String title) {
        this.title = title;
    }

    public void setSalary(double salary) {
        this.salary = salary;
    }

    public double computeWages() {
        return salary;
    }

    public double computeBonus() {
        // bonus calculation logic based on requirements
        return 0.1 * salary;
    }

    public double computeTaxes() {
        // tax calculation logic based on requirements
        return 0.2 * salary;
    }

    public static void main(String[] args) {
        // Example usage
        Employee employee = new Employee("Hafiz Muhammad Asad Mustafa", "BSCS", "Developer", 50000.0);

        System.out.println("Employee Information:");
        System.out.println("Name: " + employee.name);
        System.out.println("Department: " + employee.department);
        System.out.println("Title: " + employee.title);
        System.out.println("Salary: Rs.  " + employee.salary);

        // Updated employee information
        employee.setDepartment("BSIT");
        employee.setTitle("Software Developer");
        employee.setSalary(60000.0);

        System.out.println("\nUpdated Employee Information:");
        System.out.println("Name: " + employee.name);
        System.out.println("Department: " + employee.department);
        System.out.println("Title: " + employee.title);
        System.out.println("Salary: $" + employee.salary);

        // Calculate and display 
        System.out.println("\nAdditional Information:");
        System.out.println("Wages: $" + employee.computeWages());
        System.out.println("Bonus: $" + employee.computeBonus());
        System.out.println("Taxes: $" + employee.computeTaxes());
    }
}
