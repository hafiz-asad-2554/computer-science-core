class Student {
    String name;
    int rollNo;
    
    // Constructor
    Student(String n, int r) {
        name = n;
        rollNo = r;
    }
    
    void display() {
        System.out.println("Name: " + name + ", Roll No: " + rollNo);
    }
}

public class StudentMain {
    public static void main(String[] args) {
        Student s1 = new Student("Alice", 101);
        Student s2 = new Student("Bob", 102);
        
        s1.display();
        s2.display();
    }
}
