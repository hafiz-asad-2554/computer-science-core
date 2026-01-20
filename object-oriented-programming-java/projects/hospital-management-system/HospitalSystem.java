import java.util.ArrayList;
import java.util.Scanner;

class Doctor {
    String name, specialization;
    Doctor(String n, String s) { name = n; specialization = s; }
    public String toString() { return "Dr. " + name + " (" + specialization + ")"; }
}

class Patient {
    String name, problem;
    Patient(String n, String p) { name = n; problem = p; }
    public String toString() { return "Patient: " + name + " - Issue: " + problem; }
}

public class HospitalSystem {
    static ArrayList<Doctor> doctors = new ArrayList<>();
    static ArrayList<Patient> patients = new ArrayList<>();
    static Scanner sc = new Scanner(System.in);

    public static void main(String[] args) {
        // Pre-populate
        doctors.add(new Doctor("Smith", "Cardio"));
        doctors.add(new Doctor("Jones", "Ortho"));

        int choice;
        do {
            System.out.println("\n1. Add Patient\n2. View Doctors\n3. View Patients\n4. Exit");
            choice = sc.nextInt();
            sc.nextLine(); // consume newline
            
            switch(choice) {
                case 1:
                    System.out.print("Name: ");
                    String n = sc.nextLine();
                    System.out.print("Problem: ");
                    String p = sc.nextLine();
                    patients.add(new Patient(n, p));
                    System.out.println("Patient Admitted.");
                    break;
                case 2:
                    for(Doctor d : doctors) System.out.println(d);
                    break;
                case 3:
                    for(Patient pa : patients) System.out.println(pa);
                    break;
            }
        } while(choice != 4);
    }
}
