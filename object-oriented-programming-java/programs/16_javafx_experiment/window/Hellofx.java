import javafx.application.Application;
import javafx.scene.Group;
import javafx.scene.Scene;
import javafx.scene.paint.Color;
import javafx.scene.shape.Circle;
import javafx.scene.text.Text;
import javafx.stage.Stage;

public class Hellofx extends Application{

    public void start(Stage primaryStage){

        Circle cir = new Circle(150, 60, 50);
        cir.setFill(Color.WHITE);
        Text hello = new Text(115, 50, "this is check");

        Group root = new Group(hello, cir);
        Scene scene = new Scene(root, 300, 120, Color.rgb(30, 230, 23));

        primaryStage.setTitle("Finish!");
        primaryStage.setScene(scene);
        primaryStage.show();

    }
}