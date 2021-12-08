package cyou.chenx221;

import java.awt.*;

//GridLayout 81 button
public class gui1207C {
    public static void main(String[] args) {
        Frame f = new Frame("GridLayout Window");
        f.setSize(1024,768);
        f.setLocation(200,300);
        f.setLayout(new GridLayout(35,35));
        for (int i = 1;i<=35*35;i++){
            Button b = new Button("Button"+i);
            f.add(b);
        }


        f.setVisible(true);

    }
}
