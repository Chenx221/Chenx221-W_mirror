package cyou.chenx221;

import java.util.Scanner;

// Java实验一 3
public class test092203 {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		System.out.print("请输入整数，以0结束：");
		int n = scanner.nextInt(), sum = 0, num = 0, upn = 0, dpn = 0;
		while (n != 0) {
			sum += n;
			num++;
			if (n > 0)
				upn++;
			else
				dpn++;

			n = scanner.nextInt();
		}
		float ave = (float) sum / num;
		System.out.println("正数：" + upn + "，负数：" + dpn + "，和为" + sum + "，平均值为：" + ave);

		scanner.close();
	}
}
