package cyou.chenx221;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class gui1214C {
    public static void main(String[] args) {
        JButton jb1 = new JButton("模态对话框");
        JButton jb2 = new JButton("非模态对话框");
        JFrame jf = new JFrame("test dialog window");
        jf.setSize(1024,768);
        jf.setLocation(100,200);
        jf.setLayout(new FlowLayout());
        jf.add(jb1);
        jf.add(jb2);
        jf.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        jf.setVisible(true);
        JDialog jd1 = new JDialog(jf,"Dialog");
        jd1.setSize(800,600);
        jd1.setLocation(100,200);
        jd1.setLayout(new FlowLayout());
        JButton jb3 = new JButton("exit");
        jd1.add(jb3);
        jb1.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                jd1.setModal(true);
                jd1.setVisible(true);
            }
        });
        jb2.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                jd1.setModal(false);
                jd1.setVisible(true);
            }
        });
        jb3.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                jd1.setVisible(false);
            }
        });

    }
}
