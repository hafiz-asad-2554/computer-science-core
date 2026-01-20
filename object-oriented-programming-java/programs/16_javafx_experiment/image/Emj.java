package image;

import javax.swing.ImageIcon;

import javafx.application.Application;
import javafx.scene.Scene;
import javafx.scene.image.ImageView;
import javafx.scene.image.Image;
import javafx.scene.layout.StackPane;
import javafx.stage.Stage;

/**
 * Image
 */
public class Emj extends Application {

    public void start(Stage primerStage) {
        Image image = new Image("desertification.png");
        ImageView imageView = new ImageView(image);
        StackPane pane = new StackPane(imageView);
        pane.setStyle("-fx-background-color: yellow");

        Scene prime = new Scene(pane, 300, 500);

        primerStage.setTitle("image show");
        primerStage.setScene(prime);
        primerStage.show();

    }
    public static void main(String[] args) {
        launch(args);
    }

}