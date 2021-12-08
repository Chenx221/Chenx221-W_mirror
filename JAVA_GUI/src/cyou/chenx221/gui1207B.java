package cyou.chenx221;
//BorderLayout 5 buttons
import java.awt.*;

public class gui1207B {
    public static void main(String[] args) {
        Frame f = new Frame("BorderLayout Window");
        f.setLayout(new BorderLayout());
        f.setSize(1024,768);
        f.setLocation(200,300);
        Button b1 = new Button("East");
        Button b2 = new Button("West");
        Button b3 = new Button("North");
        Button b4 = new Button("South");
        Button b5 = new Button("Center");
        f.add(b1,BorderLayout.EAST);
        f.add(b2,BorderLayout.WEST);
        f.add(b3,BorderLayout.NORTH);
        f.add(b4,BorderLayout.SOUTH);
        f.add(b5,BorderLayout.CENTER);




        f.setVisible(true);
    }
}
