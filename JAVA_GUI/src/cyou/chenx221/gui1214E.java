package cyou.chenx221;
//简易登录界面

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class gui1214E {
    public static void main(String[] args) {
        JFrame jf = new JFrame("LOGIN");
        jf.setSize(640, 240);
        jf.setLocation(100, 200);
        jf.setLayout(new FlowLayout(FlowLayout.CENTER, 20, 30));

        JLabel jl1 = new JLabel("USERNAME");
        JLabel jl2 = new JLabel("PASSWORD");

        JCheckBox jcb1 = new JCheckBox("REMEMBER USERNAME");
        JCheckBox jcb2 = new JCheckBox("REMEMBER PASSWORD");

        JTextField jtf1 = new JTextField(27);

        JPasswordField jpf1 = new JPasswordField(27);

        JButton jb1 = new JButton("LOGIN");
        JButton jb2 = new JButton("SIGN OUT");

        jf.add(jl1);
        jf.add(jtf1);
        jf.add(jcb1);
        jf.add(jl2);
        jf.add(jpf1);
        jf.add(jcb2);
        jf.add(jb1);
        jf.add(jb2);
        jb2.setEnabled(false);

        jb1.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                if (jtf1.getText().equals("admin") && jpf1.getText().equals("admin")) {
                    jb1.setText("登录成功");
                    jb1.setEnabled(false);
                    jb2.setEnabled(true);
                    jb2.setText("SIGN OUT");
                } else {
                    jb1.setText("密码错误");
                    jpf1.setText("");
                }
            }
        });
        jb2.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                jb2.setText("已登出");
                if (!jcb1.isSelected()) jtf1.setText("");
                if (!jcb2.isSelected()) jpf1.setText("");

                jb1.setEnabled(true);
                jb1.setText("LOGIN");
            }
        });


        jf.setResizable(false);
        jf.setVisible(true);
        jf.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
}
