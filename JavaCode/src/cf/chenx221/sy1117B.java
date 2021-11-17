package cf.chenx221;

import java.util.Scanner;

public class sy1117B {
    public static void main(String[] args) {
        Scanner scanner =new Scanner(System.in);
        String s1 = scanner.next();
        System.out.println("输入的内容长度为"+s1.length());
        char[] arr = s1.toCharArray();
        int count=0;
        for (char i:arr){
            if (i=='a'){
                count++;
            }
        }
        System.out.println("输入的内容中a出现了"+count);
    }
}
