
import javafx.application.Application;
import javafx.scene.Group;
import javafx.scene.Scene;
import javafx.scene.paint.Color;
import javafx.scene.text.Text;
import javafx.stage.Stage;

public class Style extends Application {
    public void start(Stage primaryStage) {

        String s1 = "Welcome";
        Text text = new Text(0, 350, s1);
        text.setStyle("-fx-font-size: 300px; -fx-font-family: 'Segoe Print';");
        text.setFill(Color.web("hsl(80, 50%, 190%)"));

        String l1 = "*************************";
        Text line = new Text(105, 90, l1);
        line.setStyle("-fx-font-size: 23px;");

        Group g1 = new Group(text, line);
        Color c1 = Color.DEEPPINK;
        Scene prime = new Scene(g1, 1366, 710, c1);

        primaryStage.setTitle("Font");
        primaryStage.setScene(prime);

        primaryStage.show();
    }
    
}
