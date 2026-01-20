import javafx.application.Application;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.control.Label;
import javafx.scene.control.TextField;
import javafx.scene.layout.GridPane;
import javafx.scene.paint.Color;
import javafx.scene.text.Font;
import javafx.scene.text.Text;
import javafx.stage.Stage;

/**
 * Main
 */
public class Main extends Application {
    @Override
    public void start(Stage Kamzori) throws Exception {
        Text log = new Text("login");
        log.setFont(new Font("times new romans", 20));
        
        TextField name = new TextField();
        Label lname = new Label("Name");
        TextField password = new TextField();
        Label pass = new Label("Password");
        Button submit = new Button("Submit");
        submit.setTranslateX(45);
        
        GridPane root = new GridPane();
        root.addRow(0, log);
        root.addRow(1, lname, name);
        root.addRow(2, pass, password);
        root.addRow(3, submit);
        root.setHgap(15);
        root.setVgap(15);

        Scene scene = new Scene(root, 400, 300, Color.WHEAT);
        scene.getStylesheets().add("Main.css");

        Kamzori.setTitle("roley");
        Kamzori.setScene(scene);
        Kamzori.show();
    }

}