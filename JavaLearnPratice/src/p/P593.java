package p;

import java.util.Scanner;

public class P593 {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		String rule = "1\\d\\d\\d\\d\\d\\d\\d\\d\\d\\d";

		String phone = scanner.next();
		if (phone.matches(rule))
			System.out.println("匹配规则");
		else
			System.out.println("不匹配规则");

		scanner.close();
	}

}
