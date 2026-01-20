
import javafx.application.Application;
import javafx.scene.text.Font;
import javafx.scene.text.Text;
import javafx.stage.Stage;
import javafx.scene.Group;
import javafx.scene.Scene;
import javafx.scene.paint.Color;

public class Texts extends Application{
    public void start(Stage primaryStage){
        Font font1 = new Font("Algerian", 34);
        Text t1 = new Text(10, 50, "this is text");
        t1.setStyle("-fx-color: blue");
        t1.setFont(font1);

        Group root = new Group(t1);
        Scene scene = new Scene(root, 360, 620, Color.RED);

        primaryStage.setTitle("Text");
        primaryStage.setScene(scene);
        primaryStage.show();
    }
    
}
