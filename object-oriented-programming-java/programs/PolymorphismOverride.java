class Bank {
    int getInterestRate() { return 0; }
}

class SBI extends Bank {
    int getInterestRate() { return 8; }
}

class ICICI extends Bank {
    int getInterestRate() { return 7; }
}

public class PolymorphismOverride {
    public static void main(String[] args) {
        Bank b;
        b = new SBI();
        System.out.println("SBI Rate: " + b.getInterestRate() + "%");
        b = new ICICI();
        System.out.println("ICICI Rate: " + b.getInterestRate() + "%");
    }
}
