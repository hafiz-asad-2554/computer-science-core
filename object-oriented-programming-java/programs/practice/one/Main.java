/**
 * Main
 */
public class Main {

    public int sum(int a, int b) {
        return a + b;
    }

    public static void main(String[] args) {
        Main ma = new Main();
        Main1 ma1 = new Main1();
        Main2 ma2 = new Main2();
        int x = ma.sum(5, 6);
        System.out.println(x);
        x = ma1.sum(4, 5, 7);
        System.out.println(x);
        x = ma2.sum(3, 6, 7, 4);
        System.out.println(x);
    }
}