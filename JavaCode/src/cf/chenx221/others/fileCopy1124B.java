package cf.chenx221.others;
//利用缓存流复制文件，显示用时
import java.io.BufferedInputStream;
import java.io.BufferedOutputStream;
import java.io.FileInputStream;
import java.io.FileOutputStream;

public class fileCopy1124B {
    public static void main(String[] args) throws Exception {
        BufferedInputStream bis = new BufferedInputStream(new FileInputStream("src/cf/chenx221/others/03. Monster.flac"));
        BufferedOutputStream bos = new BufferedOutputStream(new FileOutputStream("src/cf/chenx221/others/copyB.flac"));
        int len;
        long start_time = System.currentTimeMillis();
        while ((len = bis.read()) != -1) {
            bos.write(len);
        }
        long end_time = System.currentTimeMillis();
        System.out.println("复制完成，用时:"+(end_time-start_time)+"ms");
        bis.close();
        bos.close();
    }
}
