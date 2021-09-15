package p;

import java.util.Scanner;

public class P462 {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int length = scanner.nextInt(); // 使用 奇数

		int lmid = (length + 1) / 2; // 提前计算中间数

		for (int i = 1; i <= length; i++) {
			int l = i; // 备份i的值

			if (i >= lmid)
				i = length + 1 - i; // 处理后半部分

			for (int j = 1; j <= lmid - i; j++)
				System.out.print(" "); // 输出占位空格

			for (int k = 1; k <= 2 * i - 1; k++)
				System.out.print("*"); // 输出*

			System.out.println();
			i = l; // 从l恢复i的原值
		}
	}
}
