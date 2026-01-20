import java.awt.Color;
import java.awt.Graphics2D;
import java.awt.geom.Ellipse2D;

public class CircleExample {

    public static Ellipse2D createCircle(double x, double y, double r, Color fillColor) {
        Ellipse2D circle = new Ellipse2D.Double(x - r, y - r, 2 * r, 2 * r);
        // Set the fill color of the circle
        Graphics2D g2 = (Graphics2D) circle.getGraphics();
        g2.setColor(fillColor);
        g2.fill(circle);
        return circle;
    }

    public static void main(String[] args) {
        double x = 100;
        double y = 100;
        double radius = 50;
        Color fillColor = Color.RED;

        Ellipse2D circle = createCircle(x, y, radius, fillColor);
    }
}
