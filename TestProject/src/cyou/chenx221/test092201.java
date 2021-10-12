package cyou.chenx221;

//Java 实验一 1
import java.util.Scanner;

public class test092201 {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		System.out.println("请输入成绩：");
		int score = scanner.nextInt();

		switch (score / 10) {
		case 10:
		case 9:
			System.out.println("优秀");
			break;
		case 8:
			System.out.println("良好");
			break;
		case 7:
			System.out.println("中等");
			break;
		case 6:
			System.out.println("及格");
			break;
		default:
			System.out.println("不及格");
		}
		scanner.close();
	}
}
