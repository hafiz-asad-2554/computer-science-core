import java.util.Arrays;

public class Student {
    // Properties
    private String name;
    private String address;
    private String major;
    private double[] grade;

    // Constructor
    public Student(String name, String address, String major, double[] grade) {
        this.name = name;
        this.address = address;
        this.major = major;
        this.grade = grade;
    }

    // set the address
    public void setAddress(String address) {
        this.address = address;
    }

    // set the major
    public void setMajor(String major) {
        this.major = major;
    }

    // compute the Grade Point Average (GPA)
    public double computeGPA() {
        if (grade.length == 0) {
            return 0.0; // If there are no grades, return 0.0
        }

        double sum = 0;
        for (double g : grade) {
            sum += g;
        }

        return sum / grade.length; // Calculate average
    }

    public static void main(String[] args) {
        // Example usage
        String studentName = "HAFIZ MUHAMMAD ASAD MUSTAFA";
        String studentAddress = "DUNGA BUNGA";
        String studentMajor = "Computer Science";
        double[] studentGrades = { 3.5, 4.0, 3.7, 3.2 };

        // Create a new student object
        Student student = new Student(studentName, studentAddress, studentMajor, studentGrades);

        // Display the initial GPA
        System.out.println("Initial GPA: " + student.computeGPA());

        // Set a new address and major
        student.setAddress("BAHAWALNAGAR");
        student.setMajor("Software Engineering");

        // Display the updated GPA
        System.out.println("Updated GPA: " + student.computeGPA());
    }
}
