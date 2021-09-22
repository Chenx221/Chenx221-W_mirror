package cyou.chenx221;

import java.util.Scanner;

// Java 实验一 2
public class test092202 {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int num = scanner.nextInt();
		if (num % 2 == 0 && num % 3 == 0)
			System.out.println(num + "可以同时被2和3整除");
		else
			System.out.println(num + "不可以同时被2和3整除");

		if (num % 2 == 0)
			System.out.println(num + "可以被2整除");
		else
			System.out.println(num + "不可以被2整除");

		if (num % 3 == 0)
			System.out.println(num + "可以被3整除");
		else
			System.out.println(num + "不可以被3整除");

		scanner.close();
	}
}
