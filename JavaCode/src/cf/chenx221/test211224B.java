package cf.chenx221;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.MouseAdapter;
import java.awt.event.MouseEvent;

public class test211224B extends JFrame {
    private JComboBox jComboBox;

    public test211224B(){
        setLayout(new FlowLayout(FlowLayout.CENTER));
        jComboBox = new JComboBox();
        jComboBox.setSize(200,400);
        jComboBox.setLocation(100,200);
        JButton jb = new JButton("确定");
        JPopupMenu jPopupMenu = new JPopupMenu();
        JMenuItem refresh = new JMenuItem("刷新");
        refresh.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                System.out.println("刷个毛");
                jComboBox.setVisible(false);
                jb.setVisible(false);
            }
        });
        jPopupMenu.add(refresh);
        for(int i=1;i<10;i++){
            jComboBox.addItem(i);
        }
        this.addMouseListener(new MouseAdapter() {
            @Override
            public void mouseClicked(MouseEvent e) {
                if(e.getButton()==e.BUTTON3){
                    for(int i =1;i<=30;i++){
                        jPopupMenu.show(e.getComponent(),e.getX()+i,e.getY()+i);
                    }

                }
            }
        });
        refresh.addMouseListener(new MouseAdapter() {
            @Override
            public void mouseClicked(MouseEvent e) {
                jPopupMenu.show(e.getComponent(),e.getX()+10,e.getY()+10);
            }
        });
        setSize(1000,800);
        setVisible(true);
        JLabel jl1 = new JLabel("");
        jl1.setSize(500,500);

        add(jl1);add(jb);add(jComboBox);
        jComboBox.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                System.out.println(jComboBox.getSelectedItem());
            }
        });
        jb.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                jl1.setText(String.valueOf(jComboBox.getSelectedItem()));
            }
        });
        this.setDefaultCloseOperation(DISPOSE_ON_CLOSE);
    }
    public static void main(String[] args) {
        new test211224B();
    }
}
