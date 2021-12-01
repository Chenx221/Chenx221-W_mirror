package cyou.chenx221;

import java.io.*;
import java.lang.System;
import java.util.Scanner;

public class sy12013 {
    public static void main(String[] args) throws Exception {
        System.out.println("【提示】路径不要加\"");
        System.out.print("拷什么:");
        Scanner scanner = new Scanner(System.in);
        String s_path = scanner.nextLine();//提供源文件位置
        File f1 = new File(s_path);//为后续获取源文件文件名做准备
        System.out.print("拷到哪:");
        String d_path = scanner.nextLine();//提供目标位置
        if (!(d_path.substring(d_path.length() - 1).equals("\\"))) { //为不含\结尾的路径补充\
            d_path = d_path + "\\";
        }
        Runtime rt = Runtime.getRuntime();
        //BufferedInputStream bis = new BufferedInputStream(new FileInputStream("image.png"));
        BufferedInputStream bis = new BufferedInputStream(new FileInputStream(s_path));
        BufferedOutputStream bos = new BufferedOutputStream(new FileOutputStream(d_path + "copy_" + f1.getName()));
        int data;
        double s_time = System.currentTimeMillis(), e_time;
        while ((data = bis.read()) != -1) {//拷贝
            bos.write(data);
        }
        e_time = System.currentTimeMillis();
        System.out.print("复制完毕,用时:");
        if (e_time - s_time <= 1000) {
            System.out.println((e_time - s_time) + "ms");
        } else {
            System.out.println((e_time - s_time) / 1000 + "s");
        }
        bis.close();//关闭input和output流，防止带缓冲的文件流复制未完成
        bos.close();//关闭input和output流，防止带缓冲的文件流复制未完成
    }
}
