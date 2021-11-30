package cf.chenx221.others;

import java.io.File;

public class test1130B {
    public static void main(String[] args) {
        File f = new File("result.txt");
        System.out.println(f.exists()); //判断文件是否存在
        if (f.exists()){
            //System.out.println(f.delete()); //删除文件
        }
        System.out.println(f.hashCode());
    }
}
