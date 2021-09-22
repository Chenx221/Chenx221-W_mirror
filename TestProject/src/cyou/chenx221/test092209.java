package cyou.chenx221;

import java.util.Scanner;

// Java 实验三 1
public class test092209 {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		System.out.print("输入数值以0结束：");
		int n = scanner.nextInt();
		int num[] = new int[9];
		while (n != 0) {
			if (n < 1 || n > 9) {
				System.out.println("请输入1~9之间的数字");
			} else {
				num[n - 1]++;
			}
			n = scanner.nextInt();
		}
		int nn = 1;
		for (int x : num) {
			if (x != 0)
				System.out.println(nn + "出现" + x + "次");
			nn++;
		}

		scanner.close();
	}
}
