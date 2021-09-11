package p;

import java.util.Scanner;

public class P592 {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in); // only for test
		String str1 = scanner.next(); // 6位
		String str2 = scanner.next(); // 6位
		String result1 = str1.substring(3), result2 = str2.substring(3, 6);
		// 前者是取到尾，后者指定起始位置和结束位置（都是下标，第二个参数所在位置字符不包括）

		if (result1.equals(result2))
			System.out.println("两个字串相同");
		else
			System.out.println("两个字串并不相同");
		System.out.println(result1 + "\n" + result2);
	}

}
