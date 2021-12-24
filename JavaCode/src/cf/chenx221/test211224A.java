package cf.chenx221;


import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class test211224A extends JFrame {
    private ButtonGroup group;
    private JPanel panel;
    private JPanel pallet;

    public test211224A() {
        pallet = new JPanel();
        this.add(pallet, BorderLayout.CENTER);
        panel = new JPanel();
        group = new ButtonGroup();
        addJRadioButton("灰");
        addJRadioButton("粉");
        addJRadioButton("黄");
        this.add(panel, BorderLayout.SOUTH);
        this.setSize(300, 300);
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setVisible(true);
    }

    private void addJRadioButton(final String text) {
        JRadioButton radioButton = new JRadioButton(text);
        group.add(radioButton);
        panel.add(radioButton);
        radioButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                Color color = null;
                if ("灰".equals(text)) {
                    color = Color.gray;
                } else if ("粉".equals(text)) {
                    color = Color.PINK;
                } else if ("黄".equals(text)) {
                    color = Color.yellow;
                } else {
                    color = Color.white;
                }
                pallet.setBackground(color);
            }
        });
    }

    public static void main(String[] args) {
        new test211224A();
    }
}
