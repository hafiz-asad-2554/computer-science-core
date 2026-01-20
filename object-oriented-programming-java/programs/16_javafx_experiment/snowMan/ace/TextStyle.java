
import javafx.application.Application;
import javafx.scene.Group;
import javafx.scene.Scene;
import javafx.scene.paint.Color;
import javafx.scene.text.Font;
import javafx.scene.text.Text;
import javafx.stage.Stage;

public class TextStyle extends Application {
    public void start(Stage primaryStage) {
        Font f1 = new Font("Copperplate Gothic Bold", 45);
        Text heading = new Text();

        heading.setFont(f1);
        heading.setText("this is test");
        heading.setX(0);
        heading.setY(45);
        heading.setStroke(Color.ROYALBLUE);
        heading.setFill(null);
        heading.setSmooth(true);

        Scene s1 = new Scene(new Group(heading), 600, 600, Color.WHEAT);

        primaryStage.setTitle("Words");
        primaryStage.setScene(s1);
        primaryStage.show();
    }
}
