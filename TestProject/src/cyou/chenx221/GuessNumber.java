package cyou.chenx221;

import java.util.Random;
import java.util.Scanner;

public class GuessNumber {

	public static void main(String[] args) {
		System.out.println("###猜数字 0~100范围###");
		int num = new Random().nextInt(100);
		Scanner scanner = new Scanner(System.in);
		int guessnum,time=0;
		boolean flag = true;
		while (flag) {
			guessnum = scanner.nextInt();
			time++;
			if (num < guessnum) {
				System.out.println("大了");
				continue;
			} else if (num > guessnum) {
				System.out.println("小了");
				continue;
			} else {
				System.out.println("猜对了，尝试了"+time+"次");
				flag = false;
			}
		}
		scanner.close();
	}
}