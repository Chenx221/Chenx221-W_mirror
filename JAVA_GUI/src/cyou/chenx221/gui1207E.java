package cyou.chenx221;

import java.awt.*;
import java.awt.event.*;


public class gui1207E {
    public static void main(String[] args) {

        Frame f2 = new Frame("Warning");
        f2.setLayout(null);
        f2.setSize(100,200);
        Frame f = new Frame("test");
        f.setLayout(null);
        f.setSize(1024, 1024);
        Button b1 = new Button("start");
        b1.setBounds(100, 200, 100, 200);
        b1.addMouseListener(new MouseAdapter() {
            @Override
            public void mouseClicked(MouseEvent e) {


            }
        });
        f.add(b1);
        f.addWindowListener(new WindowAdapter() {
            @Override
            public void windowClosing(WindowEvent e) {
                f.dispose();
            }
        });


        f.setVisible(true);
    }
}
