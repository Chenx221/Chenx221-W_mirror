package cyou.chenx221;

import java.util.Scanner;

public class test0922 {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int score = scanner.nextInt();

		switch (score/10) {
		case 10:case 9:
			System.out.println("优秀");
			break;
		case 8: case 7:
			System.out.println("良好");
			break;
		case 6:
			System.out.println("及格");
			break;
		default :
			System.out.println("不及格");
		}
	}
}
