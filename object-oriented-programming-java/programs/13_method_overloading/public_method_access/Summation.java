public class Summation{

    // public Summation(){
        
    // }
    
    // here are two methods having same name sum and different signatures in same class so this is method over loading.
    public int sum(int a, int b){ // first sum method
        int c = a + b;
        return c;
    }

    public int sum(int d, int e, int f){ // second sum method.
        int g = d + e + f;
        return g;
    }
    

    public static void main(String[] args){
    Summation p1 = new Summation();

    int x = p1.sum(3, 4); // it calls the first sum method.
    System.out.println(x);

    int y = p1.sum(3, 4, 5); // it calls the second sum method
    System.out.println(y);
    }
}