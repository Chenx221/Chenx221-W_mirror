package cyou.chenx221;
//验证码
import java.awt.*;
import java.awt.event.WindowAdapter;
import java.awt.event.WindowEvent;
import java.util.Arrays;
import java.util.Random;

class Ver_panel extends Panel {
    public void paint(Graphics g) {
        int width=160;
        int height =40;
        g.setColor(Color.LIGHT_GRAY);
        g.fillRect(0,0,width,height);
        g.setColor(Color.black);
        g.drawRect(0,0,width-1,height-1);
        //
        //
        g.setFont(new Font("微软雅黑",Font.BOLD,30));
        g.setColor(Color.blue);
        Random rd = new Random();
        StringBuilder sb = new StringBuilder();
        char[] chars = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ".toCharArray();
        char[] rschars = new char[4];//store key
        for(int i =0;i<4;i++){ //0~1
            sb.append(chars[rd.nextInt(chars.length)]+" ");
        }
        System.out.println("DEBUG:"+ sb.toString());
        g.drawString(sb.toString(),20,30);
    }
}


public class gui1214A {
    public static void main(String[] args) {
        Frame f = new Frame("验证码");

        Panel p1 = new Ver_panel();
        TextField t1 = new TextField();
        t1.setSize(50,50);
        f.add(p1);f.add(t1);
        f.setSize(1000, 500);
        f.setLocation(100, 200);
        f.setResizable(false);
        //f.setLayout(null);
        f.setVisible(true);


        f.addWindowListener(new WindowAdapter() {
            @Override
            public void windowClosing(WindowEvent e) {
                f.dispose();
            }
        });
    }
}
