package cyou.chenx221;

import javax.swing.*;
import java.awt.*;

public class gui1214D {
    public static void main(String[] args) {
        JFrame jf = new JFrame("这是个测试窗口");
        jf.setSize(1024, 768);
        jf.setLocation(100, 200);
        JScrollPane jsp1 = new JScrollPane();
        jsp1.setHorizontalScrollBarPolicy(ScrollPaneConstants.HORIZONTAL_SCROLLBAR_AS_NEEDED);//设定水平滚动条出现策略为按需显示
        jsp1.setVerticalScrollBarPolicy(ScrollPaneConstants.VERTICAL_SCROLLBAR_ALWAYS);//设定垂直滚动条出现策略为总是显示
        JPanel jp = new JPanel();
        jp.add(new JButton("按钮1"));
        jp.add(new JButton("按钮2"));
        jp.add(new JButton("按钮3"));
        jp.add(new JButton("按钮4"));
        jsp1.setViewportView(jp);
        jf.add(jsp1, BorderLayout.CENTER);
        jf.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        jf.setVisible(true);

    }
}
