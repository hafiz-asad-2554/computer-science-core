import javafx.application.Application;
import javafx.scene.Group;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.control.CheckBox;
import javafx.scene.control.Label;
import javafx.scene.control.TextField;
import javafx.scene.layout.GridPane;
import javafx.stage.Stage;

/**
 * Main
 */
public class Main extends Application {
    @Override
    public void start(Stage primaryStage) throws Exception {
        Label name = new Label("Name");
        TextField Tname = new TextField();
        Label pass = new Label("Password");
        TextField tpass = new TextField();
        CheckBox reme = new CheckBox("Remember Me!");

        GridPane root = new GridPane();
        root.addRow(0, name, Tname);
        root.addRow(1, pass, tpass);
        root.addRow(3, reme);
        root.setHgap(10);
        root.setVgap(10);
        root.setId("setting");

        Button submit = new Button("Submit");
        GridPane root1 = new GridPane();
        root1.setHgap(40);
        root1.setVgap(40);
        root1.addRow(4, submit);

        Group plane = new Group(root, root1);
        Scene scene = new Scene(plane, 400, 200);
        // scene.getStylesheets().clear();
        plane.getStylesheets().add("main.css");

        primaryStage.setScene(scene);
        primaryStage.setTitle("REMEMBER");
        primaryStage.show();

    }

}