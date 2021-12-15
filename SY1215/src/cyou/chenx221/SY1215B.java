package cyou.chenx221;

import java.awt.*;
import java.awt.event.WindowAdapter;
import java.awt.event.WindowEvent;

public class SY1215B {
    public static void main(String[] args) {
        Frame f = new Frame("BorderLayout test");
        f.setLayout(new BorderLayout());
        f.setSize(1024,768);
        f.setLocation(100,200);
//        TextField tf1 = new TextField("");
//        TextField tf2 = new TextField("");
//        TextField tf3 = new TextField("");
//        TextField tf4 = new TextField("");
//        TextField tf5 = new TextField("");
        f.add(new TextField("NORTH"),BorderLayout.NORTH);
        f.add(new TextField("SOUTH"),BorderLayout.SOUTH);
        f.add(new TextField("WEST"),BorderLayout.WEST);
        f.add(new TextField("EAST"),BorderLayout.EAST);
        f.add(new TextField("CENTER"),BorderLayout.CENTER);

        f.setVisible(true);






        f.addWindowListener(new WindowAdapter() {
            @Override
            public void windowClosing(WindowEvent e) {
                f.dispose();
            }
        });
    }
}
