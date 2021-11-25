package cf.chenx221.others;
//完成文件复制操作并统计用时
import java.io.FileInputStream;
import java.io.FileOutputStream;

public class fileCopy1124A {
    public static void main(String[] args) throws Exception{
        FileInputStream in = new FileInputStream("C:\\Users\\Chenx221\\Documents\\GitHub\\Chenx221-W\\JavaCode\\src\\cf\\chenx221\\others\\03. Monster.flac");
        FileOutputStream out = new FileOutputStream("C:\\Users\\Chenx221\\Documents\\GitHub\\Chenx221-W\\JavaCode\\src\\cf\\chenx221\\others\\copy.flac");
        int data;
        long start_time = System.currentTimeMillis();
        byte[] cache = new byte[4194304]; //4MB cache
        while ((data=in.read(cache))!=-1){
            out.write(cache,0,data);
        }
        long end_time = System.currentTimeMillis();
        System.out.println("复制完毕，用时:"+(end_time-start_time)+"ms");
        in.close();out.close();
    }
}
