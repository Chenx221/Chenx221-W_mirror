package cyou.chenx221;

import java.util.Scanner;

public class Test0915_03 {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int num = scanner.nextInt();
//		switch (num %2) {
//		case 0:
//			System.out.println("Test");
//			System.out.println("偶数");
//			break;
//		case 1:
//			System.out.println("奇数");
//		}
		while (num>0) {
			if (num==12) {
				num--;
				continue;
			}
			System.out.println(num--);
			if (num%50==0)
				break;
		}
	}
}
