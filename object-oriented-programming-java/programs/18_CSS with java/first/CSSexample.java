import javafx.application.Application;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.control.Label;
import javafx.scene.control.TextField;
import javafx.scene.layout.GridPane;
import javafx.scene.paint.Color;
import javafx.stage.Stage;

/**
 * CSSexample
 */
public class CSSexample extends Application {
    public void start(Stage primaryStage) {
        Button submit = new Button("submit");
        submit.setId("stylee");

        Label name = new Label("name");
        name.setId("name");
        TextField textField = new TextField();

        GridPane root = new GridPane();
        root.addRow(0, name, textField);
        root.addColumn(1, submit);
        root.setHgap(15);
        root.setVgap(15);

        Scene scene = new Scene(root, 300, 400, Color.WHITE);
        scene.getStylesheets().clear();
        // root.getStylesheets().add(getClass().getResource("style.css").toExternalForm());
        root.getStylesheets().add("style.css");

        primaryStage.setTitle("CSS show");
        primaryStage.setScene(scene);
        primaryStage.show();
    }
}