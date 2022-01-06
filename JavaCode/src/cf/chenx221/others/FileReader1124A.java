package cf.chenx221.others;

import java.io.FileReader;
import java.io.FileWriter;

public class FileReader1124A {
    public static void main(String[] args) throws Exception {
        FileReader reader = new FileReader("src/cf/chenx221/others/tempfile");
        int data;
        while ((data = reader.read()) != -1) {
            System.out.print((char) data);
        }
        reader.close();
        FileWriter writer = new FileWriter("src/cf/chenx221/others/tempfile2",true);
        String str = "你好世界";
        writer.write(str);
        writer.write("\n");
        writer.close();
        double d1=123.5D;
    }
}
