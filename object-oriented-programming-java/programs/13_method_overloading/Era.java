public class Era{
    private double width, length, height;

    public Era(double w, double l, double h){
      width = w;
      length = l;
      height = h;
    }
    
    public void Area(double w, double l){
        double area = w * l;
        System.out.println(area);
    }

    public void Area(double w, double l, double h){
        double area = w * l * h;
        System.out.println(area);
    }


    public static void main(String[] args){
    Era area = new Era(34.3, 34.34, 43.3);
    area.Area(34.5, 45.65, 0.001);
    }
}