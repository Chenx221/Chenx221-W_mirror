package cyou.chenx221;

import javax.swing.*;
import java.awt.*;

public class gui1214B extends JFrame {
    public gui1214B(){
        this.setTitle("JFrame test");
        this.setSize(1024,768);
        JButton jb1 = new JButton("按钮");
        this.setLayout(new FlowLayout());
        this.add(jb1);
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setVisible(true);
    }
    public static void main(String[] args) {
        new gui1214B();
    }
}
