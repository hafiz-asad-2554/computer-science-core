import javafx.application.Application;
import javafx.stage.Stage;
import javafx.scene.Group;
import javafx.scene.Scene;
import javafx.scene.paint.Color;
import javafx.scene.shape.Circle;
import javafx.scene.shape.Line;

/**
 * Emj
 */
public class Emj extends Application {

    public void start(Stage primaryStage) {
        Circle head = new Circle(80.0, 70.0, 60.0);
        head.setFill(Color.WHITE);

        Circle rightEye = new Circle(70.0, 60.0, 5.0);
        Circle leftEye = new Circle(90.0, 60.0, 5.0);
        Line mouth = new Line(70, 80, 90, 80);

        Group root = new Group(head, rightEye, leftEye, mouth);
        root.setTranslateX(25);
        root.setTranslateY(15);

        Scene scene = new Scene(root, 200, 200, Color.BLACK);

        primaryStage.setTitle("face");
        primaryStage.setScene(scene);
        primaryStage.show();
    }
}