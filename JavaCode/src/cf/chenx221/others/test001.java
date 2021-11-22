package cf.chenx221;

import java.util.Scanner;

public class test001 {
    public static void main(String[] args) {
        Scanner i = new Scanner(System.in);
        int n = i.nextInt();
        int num[] = new int[9];
        while (n != 0) {
            if (n < 1 || n > 9) {
                System.out.println("请输入1~9之间的数字");
            } else {
                num[n - 1]++;
            }
            n = i.nextInt();
        }

        for (int j = 1; j < 10; j++) {
            System.out.println(j + "共出现" + num[j-1] + "次");
        }
    }
}
