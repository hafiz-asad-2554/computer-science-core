import javafx.application.Application;
import javafx.scene.Group;
import javafx.scene.Scene;
import javafx.scene.paint.Color;
import javafx.scene.shape.ArcType;
import javafx.stage.Stage;

/**
 * Arc
 */
public class Arc extends Application {
    public void start(Stage primaryStage) {
        javafx.scene.shape.Arc lips = new javafx.scene.shape.Arc(100.0, 100, 50, 50, 45, 250);
        lips.setType(ArcType.OPEN);
        lips.setStroke(Color.BLUE);
        lips.setStrokeWidth(34);
        lips.setFill(null);
        Scene s1 = new Scene(new Group(lips), 200, 200, Color.RED);

        primaryStage.setTitle("arcs");
        primaryStage.setScene(s1);
        primaryStage.show();
    }
}