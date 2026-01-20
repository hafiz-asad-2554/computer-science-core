import javafx.application.Application;
import javafx.scene.Group;
import javafx.scene.Scene;
import javafx.scene.paint.Color;
import javafx.scene.shape.Circle;
import javafx.scene.shape.Line;
import javafx.stage.Stage;

/**
 * Lines
 */
public class Lines extends Application {
    public void start(Stage primaryStage) {
        Line l1 = new Line(100, 0, 200, 0);
        Line l2 = new Line(200, 0, 300, 100);
        Line l3 = new Line(300, 100, 300, 200);
        Line l4 = new Line(300, 200, 200, 300);
        Line l5 = new Line(200, 300, 100, 300);
        Line l6 = new Line(100, 300, 0, 200);
        Line l7 = new Line(0, 200, 0, 100);
        Line l8 = new Line(0, 100, 100, 0);

        Circle circle = new Circle(150, 150, 150);
        circle.setFill(null);
        circle.setStroke(Color.BLACK);

        Group octa = new Group(l1, l2, l3, l4, l5, l6, l7, l8, circle);
        octa.setTranslateX(50.0);
        octa.setTranslateY(50.0);
        for (int x = 0; x != 10; x += 20) {
            octa.setRotate(x);
        }
        Scene primery = new Scene(octa, 400, 400, Color.ALICEBLUE);

        primaryStage.setTitle("primeryWalter");
        primaryStage.setScene(primery);
        primaryStage.show();

    }
}