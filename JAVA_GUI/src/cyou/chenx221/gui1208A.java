package cyou.chenx221;

import java.awt.*;
import java.awt.event.MouseAdapter;
import java.awt.event.MouseEvent;
import java.awt.event.WindowAdapter;
import java.awt.event.WindowEvent;

public class gui1208A {
    public static void main(String[]args) {
        //show a blank window
        Frame f = new Frame("TEST");
        f.setLayout(null);
        f.setSize(1024, 768);
        f.setLocation(100, 200);
        f.setVisible(true);

        //show type text field
        TextField t1 = new TextField();
        t1.setBounds(50, 50, 500, 200);
        f.add(t1);

        TextField t2 = new TextField("运算结果:");
        t2.setBounds(700, 100, 100, 100);
        f.add(t2);

        Button b1 = new Button("calculate");
        b1.setBounds(400, 400, 100, 100);
        f.add(b1);

        Button b2 = new Button("reset");
        b2.setBounds(550, 400, 100, 100);
        f.add(b2);

        Button b3 = new Button("exit");
        b3.setBounds(700, 400, 100, 100);
        f.add(b3);

        //respond button3 clicked event
        //exit
        b3.addMouseListener(new MouseAdapter() {
            @Override
            public void mouseClicked(MouseEvent e) {
                f.setVisible(false);
                f.dispose();
            }
        });


        //respond button2 clicked event
        //reset function
        b2.addMouseListener(new MouseAdapter() {
            @Override
            public void mouseClicked(MouseEvent e) {
                t1.setText("");
                t2.setText("运算结果:");
            }
        });

        //respond button1 clicked event
        b1.addMouseListener(new MouseAdapter() {//1+5*2/4=
            @Override
            public void mouseClicked(MouseEvent e) {
                String type_string = t1.getText();
                boolean stop_flag=false;
                if (type_string.length() == 0) {
                    t2.setText("算式为空");
                }
                else {
                    char[] Ctype_String = type_string.toCharArray();//2*2=
                    for (int i = 0; i < Ctype_String.length; i++) {
                        if(Ctype_String[i] == '/' || (Ctype_String[i] == '*')) {
                            int j, k;
                            for (j = i - 1; j >= 0; j--) {
                                if (!((Ctype_String[j] >= '0' && Ctype_String[j] <= '9') || Ctype_String[j] == '.')) {
                                    break;
                                }
                            }
                            for (k = i + 1; k < Ctype_String.length; k++) {
                                if (!((Ctype_String[k] >= '0' && Ctype_String[k] <= '9') || Ctype_String[k] == '.')) {
                                    break;
                                }
                            }
                            int temp=j;if(j<0) j=0;//fix for value of j out of range
                            if (Ctype_String[i] == '/') {
                                if(Double.parseDouble(type_string.substring(i + 1, k))==0){
                                    t2.setText("ERROR");stop_flag=true;
                                    break;
                                }
                                type_string = type_string.substring(0, temp + 1)
                                        + (Double.parseDouble(type_string.substring(j, i)) / Double.parseDouble(type_string.substring(i + 1, k)))
                                        + type_string.substring(k);

                            } else if (Ctype_String[i] == '*') {
                                type_string = type_string.substring(0, temp + 1)
                                    + (Double.parseDouble(type_string.substring(j,i)) * Double.parseDouble(type_string.substring(i + 1, k)))
                                    + type_string.substring(k);

                            }
                            Ctype_String = type_string.toCharArray();
                        }
                    }

                    Ctype_String = type_string.toCharArray();
                    if(!stop_flag) {
                        double left = 0, temp = 0;
                        int flag = 0, step = 0, length = 0;
                        for (char c : Ctype_String) {
                            if (c >= '0' && c <= '9') {
                                temp = temp * 10 + (int) c - 48;//conv char to int
                                if (length > 0) {
                                    length++;
                                }
                            } else if (c == '.') {
                                length = 1;
                            } else {
                                step++;
                                if (step == 1) {
                                    if (length == 0) {
                                        left = temp;
                                    } else {
                                        left = temp / (Math.pow(10, length - 1));
                                    }
                                } else {
                                    if (length != 0) {
                                        temp /= (Math.pow(10, length - 1));
                                    }
                                    switch (flag) {
                                        case 1:
                                            left = left + temp;
                                            break;
                                        case 2:
                                            left = left - temp;
                                            break;
                                    }
                                    step = 1;
                                }
                                temp = 0;
                                length = 0;

                                switch (c) {//1\2\3\4
                                    case '+':
                                        flag = 1;
                                        break;
                                    case '-':
                                        flag = 2;
                                        break;
                                    case '=': {
                                        t2.setText("运算结果:" + left);
                                        //System.exit(20);
                                    }
                                    default:
                                        t1.setText(t1.getText() + "\n[遇到错误]");
                                }

                            }
                        }
                    }
                }
            }
        });

        //respond exit event
        f.addWindowListener(new WindowAdapter() {
            @Override
            public void windowClosing(WindowEvent e) {
                f.setVisible(false);
                f.dispose();
            }
        });
    }
}
