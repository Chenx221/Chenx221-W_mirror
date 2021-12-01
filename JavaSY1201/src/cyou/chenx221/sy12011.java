package cyou.chenx221;

import java.util.Random;

public class sy12011 {
    public static void main(String[] args) {
        Random rd = new Random();
        int[] iarr = new int[5];
        int max = -1, min = 11;
        boolean flag;
        for (int i = 0; i < iarr.length; i++) {
            flag = false;
            iarr[i] = rd.nextInt(11);
            for (int j = 0; j < i; j++) { //判断重复 开始
                if (iarr[i] == iarr[j]) {
                    i--;
                    flag = true;
                    break;
                }
            }//判断重复 结束
            if (!flag) {
                System.out.print(iarr[i] + " ");//输出随机数
                if (i == 0) {//查找最大值最小值 开始
                    max = min = iarr[0];
                } else {
                    if (iarr[i] > max) {
                        max = iarr[i];
                    }
                    if (iarr[i] < min) {
                        min = iarr[i];
                    }
                }//查找最大值最小值 结束
            }
        }
        System.out.println("\n最大值为" + max + "\n最小值为" + min);

    }
}
