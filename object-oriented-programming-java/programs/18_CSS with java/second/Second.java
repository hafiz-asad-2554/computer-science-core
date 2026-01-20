import javafx.application.Application;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.control.Label;
import javafx.scene.control.TextField;
import javafx.scene.layout.GridPane;
import javafx.stage.Stage;

public class Second extends Application{
    public void start(Stage yakki) {
        Label first_name = new Label("First Name:");
        first_name.setId("first");

        Label last_name = new Label("Last Name:");
        last_name.setId("last");

        TextField namField = new TextField();
        namField.setId("tfirst");

        TextField lastField = new TextField();
        lastField.setId("tlast");

        Button Submit = new Button("Submit");
        Submit.setId("submit");
        Button Reset = new Button("Reset");
        Reset.setId("reset");

        GridPane root = new GridPane();
        root.setHgap(10);
        root.setVgap(15);
        // root.setTranslateX(15);
        // root.setTranslateY(15);

        Scene scene = new Scene(root, 400, 200);
        root.addRow(0, first_name, namField);
        root.addRow(1, last_name, lastField);
        root.addRow(4, Submit, Reset);
        root.getStylesheets().add("Second.css");

        yakki.setTitle("Form");
        yakki.setScene(scene);
        yakki.show();
    }
}