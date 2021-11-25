package cf.chenx221.others;

import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.nio.charset.StandardCharsets;

public class io1124A {
    public static void main(String[] args) throws Exception {
        FileInputStream in = new FileInputStream("C:\\Users\\Chenx221\\Documents\\GitHub\\Chenx221-W\\JavaCode\\src\\cf\\chenx221\\others\\tempfile");
        int b;
        while (true){
            b=in.read();
            if (b==-1){
                break;
            }
            System.out.print((char)b);
        }
        in.close();
        FileOutputStream out = new FileOutputStream("C:\\Users\\Chenx221\\Documents\\GitHub\\Chenx221-W\\JavaCode\\src\\cf\\chenx221\\others\\tempfile",true);
        String str = "\nhello";
        byte[] barr = str.getBytes(); //StandardCharsets.UTF_8
        for (int i:barr){
            out.write(i);
        }
        out.close();


    }
}
