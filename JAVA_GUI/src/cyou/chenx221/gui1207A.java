package cyou.chenx221;
//GUI FlowLayout 1 button

import java.awt.*;
import java.awt.event.WindowAdapter;
import java.awt.event.WindowEvent;

public class gui1207A {
    public static void main(String[] args) {
        Frame f = new Frame("FlowLayout Window");
        f.setLayout(new FlowLayout(FlowLayout.LEFT, 20, 30));
        f.setSize(800, 600);
        f.setLocation(300, 200);
        f.add(new Button("button1"));
        f.setVisible(true);
        f.addWindowListener(new WindowAdapter(){
            public void windowClosing(WindowEvent e){
                f.dispose();
            }
        });//退出事件
    }
}
