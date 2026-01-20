
package practices_set;

import javafx.application.Application;
import javafx.scene.Group;
import javafx.scene.Scene;
import javafx.scene.shape.Ellipse;
import javafx.stage.Stage;

/**
 * ShapeEllipse
 */
public class Main extends Application {
    public void start(Stage primaryStage) {
        Ellipse ellipse = new Ellipse(50, 50, 50, 50);

        Scene scene = new Scene(new Group(ellipse), 200, 200);
        primaryStage.setTitle("tie");
        primaryStage.setScene(scene);
        primaryStage.show();
    }

}