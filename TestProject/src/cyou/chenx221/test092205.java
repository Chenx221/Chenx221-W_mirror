package cyou.chenx221;

import java.util.Random;
import java.util.Scanner;

// Java实验二 1
public class test092205 {
	public static void main(String[] args) {
		Random rd = new Random();
		Scanner scanner = new Scanner(System.in);

		int n1 = rd.nextInt(100), n2 = rd.nextInt(100);
		System.out.println(n1 + "+" + n2 + "=?");
		while (true) {
			int anw = scanner.nextInt();
			if (anw == n1 + n2) {
				System.out.println("答对了");
				break;
			} else
				System.out.println("答错了，请重试");
		}
		scanner.close();
	}
}
