
import javafx.application.Application;
import javafx.stage.Stage;
import javafx.scene.Group;
import javafx.scene.Scene;
import javafx.scene.paint.Color;
import javafx.scene.shape.*;
import javafx.scene.text.Font;
import javafx.scene.text.Text;

public class SnowMan extends Application {

    public void start(Stage primaryStage) {
        Font font1 = new Font("Kunstler Script", 45);
        Text heading = new Text(20, 150, "let me dance");
        heading.setFont(font1);
        heading.setFill(Color.RED);
        heading.setStroke(Color.WHEAT);

        Ellipse base = new Ellipse(80, 210, 80, 60);
        base.setStroke(Color.RED);
        base.setFill(Color.WHITE);

        Ellipse middle = new Ellipse(80, 130, 50, 40);
        middle.setFill(Color.WHITE);
        middle.setStroke(Color.RED);

        Circle head = new Circle(80, 70, 30);
        head.setFill(Color.WHITE);
        head.setStroke(Color.RED);

        Circle rightEye = new Circle(70, 60, 5);
        Circle leftEye = new Circle(90, 65, 5);
        Arc nose = new Arc(80, 70, 20, 20, 240, 10);
        nose.setRotate(180);
        nose.setFill(Color.BLACK);
        nose.setStroke(Color.BLACK);
        nose.setType(ArcType.ROUND);
        Arc lips = new Arc(80, 70, 15, 15, 190, 100);
        lips.setFill(null);
        lips.setType(ArcType.OPEN);
        lips.setStroke(Color.BLACK);

        Circle topButton = new Circle(80, 120, 6);
        topButton.setFill(Color.BLACK);
        Circle bottomButton = new Circle(80, 140, 6);
        bottomButton.setFill(Color.BLACK);

        Line leftArm = new Line(110, 130, 160, 130);
        leftArm.setStrokeWidth(3.0);
        Line rightArm = new Line(50, 130, 0, 100);
        rightArm.setStrokeWidth(3.0);

        Rectangle stovepipe = new Rectangle(60, 0, 40, 50);
        Rectangle brim = new Rectangle(50, 45, 60, 5);

        Group hat = new Group(stovepipe, brim);
        hat.setTranslateX(7);
        hat.setRotate(10);

        Group snowman = new Group(base, middle, head, leftEye, rightEye, nose, topButton, bottomButton, leftArm,
                rightArm, hat, lips);
        snowman.setTranslateX(300);
        snowman.setTranslateY(50);
        snowman.setRotate(10);

        Circle sun = new Circle(50, 50, 30);
        sun.setFill(Color.GOLD);

        Rectangle ground = new Rectangle(0, 250, 500, 100);
        ground.setFill(Color.STEELBLUE);

        Group root = new Group(ground, sun, snowman, heading);
        Scene scene = new Scene(root, 500, 350, Color.LIGHTBLUE);

        primaryStage.setTitle("SnowMan");
        primaryStage.setScene(scene);
        primaryStage.show();

    }
}