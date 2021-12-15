package cyou.chenx221;

import java.awt.*;
import java.awt.event.WindowAdapter;
import java.awt.event.WindowEvent;

public class SY1215A {
    public static void main(String[] args) {
        Frame f = new Frame("test");
        f.setSize(1024,768);
        f.setLocation(100,200);
        f.setLayout(new FlowLayout(FlowLayout.CENTER));
        f.setVisible(true);
        f.add(new Button("Button 1"));
        f.add(new Button("Button 2"));
        f.add(new Button("Button 3"));
        f.add(new Button("Button 4"));
        f.add(new Button("Button 5"));
        f.add(new Button("Button 6"));
        f.add(new Button("Button 7"));



        f.addWindowListener(new WindowAdapter() {
            @Override
            public void windowClosing(WindowEvent e) {
                f.dispose();
            }
        });

    }
}
