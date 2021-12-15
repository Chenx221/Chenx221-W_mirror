package cyou.chenx221;

import java.awt.*;
import java.awt.event.WindowAdapter;
import java.awt.event.WindowEvent;

public class SY1215C {
    public static void main(String[] args) {
        Frame f =new Frame("GridLayout test");
        f.setLayout(new GridLayout(10,10));
        f.setSize(1024,768);
        f.setLocation(100,200);
        for(int i=1;i<=100;i++){
            f.add(new Button("Button"+i));
        }
        f.setVisible(true);


        f.addWindowListener(new WindowAdapter() {
            @Override
            public void windowClosing(WindowEvent e) {
                f.dispose();
            }
        });
    }
}
