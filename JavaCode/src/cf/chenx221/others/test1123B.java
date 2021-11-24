package cf.chenx221.others;

import java.io.IOException;

public class test1123B {
    public static void main(String[] args) {
        Runtime sysInfo = Runtime.getRuntime();
        try {
            sysInfo.exec("notepad.exe");
        } catch (IOException e) {
            e.printStackTrace();
        }
        try {
            Thread.sleep(3000);
        } catch (InterruptedException e) {
            e.printStackTrace();
        }

//        System.out.println("availableProcessors:"+sysInfo.availableProcessors());
//        System.out.println("freeMemory:"+sysInfo.freeMemory()/1024/1024+"MB");
//        System.out.println("maxMemory:"+sysInfo.maxMemory()/1024/1024+"MB");
    }
}
