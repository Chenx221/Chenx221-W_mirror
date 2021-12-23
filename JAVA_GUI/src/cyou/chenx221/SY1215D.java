package cyou.chenx221;

//简易登录界面

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.WindowAdapter;
import java.awt.event.WindowEvent;

class Login_info {
    final private String username;
    private String password;

    public Login_info(String u, String p) {
        username = u;
        password = p;
    }

    public String getPassword() {
        return password;
    }

    public String getUsername() {
        return username;
    }

    public void setPassword(String password) {
        this.password = password;
    }

//    public void setUsername(String username) { //link line13
//        this.username = username;
//    }
}

public class SY1215D {
    public static void main(String[] args) {
        //change USERNAME and PASSWORD @ here
        Login_info u1 = new Login_info("admin", "admin");

        //window init
        JFrame jf = new JFrame("LOGIN");
        JLabel jl1 = new JLabel("USERNAME");
        JLabel jl2 = new JLabel("PASSWORD");
        JLabel jl3 = new JLabel("OLD PASSWORD");
        JLabel jl4 = new JLabel("NEW PASSWORD");
        JCheckBox jcb1 = new JCheckBox("REMEMBER USERNAME");
        JCheckBox jcb2 = new JCheckBox("REMEMBER PASSWORD");
        JTextField jtf1 = new JTextField(27);
        JPasswordField jpf1 = new JPasswordField(27);
        JPasswordField jpf2 = new JPasswordField(12);
        JPasswordField jpf3 = new JPasswordField(12);
        JButton jb1 = new JButton("LOGIN");
        JButton jb2 = new JButton("SIGN OUT");
        JButton jb3 = new JButton("FORGET PASSWORD");
        JButton jb4 = new JButton("BACK");
        JButton jb5 = new JButton("SUBMIT");
        JDialog jd1 = new JDialog();
        JTextArea jta1 = new JTextArea();

        //item init
        jf.setSize(640, 240);
        jf.setLocation(100, 200);
        jf.setLayout(new FlowLayout(FlowLayout.CENTER, 20, 30));
        jb2.setEnabled(false);
        jf.setResizable(false);
        jf.setVisible(true);
        jf.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        jd1.setSize(320, 160);
        jd1.setLocation(100, 200);
        jd1.setModal(true);
        jd1.setResizable(false);
        jta1.setSize(200, 100);

        //add item to jf
        jf.add(jl1);
        jf.add(jtf1);
        jf.add(jcb1);
        jf.add(jl2);
        jf.add(jpf1);
        jf.add(jcb2);
        jf.add(jb1);
        jf.add(jb2);
        jf.add(jb3);

        //event
        jf.addWindowListener(new WindowAdapter() {//log
            @Override
            public void windowOpened(WindowEvent e) {
                System.out.println("SYS LOG:");
            }
        });

        jb1.addActionListener(new ActionListener() {//login button
            @Override
            public void actionPerformed(ActionEvent e) {
                //debug
                System.out.println("Username:" + jtf1.getText());
                System.out.println("Password:" + new String(jpf1.getPassword()));
                if (jtf1.getText().equals(u1.getUsername()) && new String(jpf1.getPassword()).equals(u1.getPassword())) {
                    jb1.setText("登录成功");
                    System.out.println("SUCCESS");
                    jb1.setEnabled(false);
                    jb2.setEnabled(true);
                    jb2.setText("SIGN OUT");
                    jb3.setText("CHANGE PASSWORD");
                } else {
                    jb1.setText("密码错误");
                    System.out.println("FAIL");
                    jpf1.setText("");
                }
            }
        });

        jb2.addActionListener(new ActionListener() {//sign out button
            @Override
            public void actionPerformed(ActionEvent e) {
                jb2.setText("已登出");
                if (!jcb1.isSelected()) jtf1.setText("");
                if (!jcb2.isSelected()) jpf1.setText("");

                jb1.setEnabled(true);
                jb1.setText("LOGIN");
                jb3.setText("FORGET PASSWORD");
            }
        });

        jb3.addActionListener(new ActionListener() {//button 3 event
            @Override
            public void actionPerformed(ActionEvent e) {
                switch (jb3.getText()) {
                    case "FORGET PASSWORD":
                        jd1.setTitle("PASSWORD HITS");
                        jd1.setLayout(new FlowLayout(FlowLayout.CENTER));
                        jta1.setText("USERNAME:" + u1.getUsername() + "\nPASSWORD:" + u1.getPassword());
                        jd1.add(jta1);
                        jd1.add(jb4);
                        jd1.setVisible(true);
                        break;
                    case "CHANGE PASSWORD":
                        jd1.setTitle("CHANGE PASSWORD");
                        jd1.setSize(200, 200);
                        jd1.setLayout(new FlowLayout(FlowLayout.CENTER));
                        jd1.add(jl3);
                        jd1.add(jpf2);
                        jd1.add(jl4);
                        jd1.add(jpf3);
                        jd1.add(jb5);
                        jd1.setVisible(true);
                        break;
                }
            }
        });

        jb5.addActionListener(new ActionListener() {//change password
            @Override
            public void actionPerformed(ActionEvent e) {
                if (new String(jpf2.getPassword()).equals(u1.getPassword())) {
                    u1.setPassword(new String(jpf3.getPassword()));

                    System.out.println("Success\nnew password:" + u1.getPassword());

                    jpf2.setText("");
                    jpf3.setText("");
                    jd1.setVisible(false);
                    jd1.remove(jl3);
                    jd1.remove(jpf2);
                    jd1.remove(jl4);
                    jd1.remove(jpf3);
                    jd1.remove(jb5);
                    jb2.setText("已登出");
                    if (!jcb1.isSelected()) jtf1.setText("");
                    if (!jcb2.isSelected()) jpf1.setText("");
                    jcb2.setSelected(false);

                    jb1.setEnabled(true);
                    jb1.setText("LOGIN");
                    jb3.setText("FORGET PASSWORD");
                } else {
                    jb5.setText("旧密码错误");
                    System.out.println("旧密码错误");
                    jpf2.setText("");
                    jpf3.setText("");
                }
            }
        });

        jb4.addActionListener(new ActionListener() {//back button event
            @Override
            public void actionPerformed(ActionEvent e) {
                jd1.dispose();
                jd1.remove(jb4);
                jd1.remove(jta1);
            }
        });


    }
}
