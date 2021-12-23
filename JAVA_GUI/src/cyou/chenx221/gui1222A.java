package cyou.chenx221;

import javax.swing.*;
import java.awt.*;
import java.awt.event.WindowAdapter;
import java.awt.event.WindowEvent;

public class gui1222A {
    public static void main(String[] args) {
        JFrame jf = new JFrame("Test Window");
        jf.setLocation(100,200);
        jf.setSize(1024,768);
        jf.setLayout(new FlowLayout(FlowLayout.CENTER));
        jf.setVisible(true);





        jf.addWindowListener(new WindowAdapter() {
            @Override
            public void windowClosing(WindowEvent e) {
                jf.dispose();
            }
        });
    }
}
