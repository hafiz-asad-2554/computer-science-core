class Account {
    private double balance;

    public void setBalance(double b) {
        if (b > 0) balance = b;
    }

    public double getBalance() {
        return balance;
    }
}

public class EncapsulationDemo {
    public static void main(String[] args) {
        Account acc = new Account();
        acc.setBalance(1500.0);
        System.out.println("Balance: " + acc.getBalance());
        
        acc.setBalance(-500); // Won't work because of check
        System.out.println("Balance after invalid set: " + acc.getBalance());
    }
}
