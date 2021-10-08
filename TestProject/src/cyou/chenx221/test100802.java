package cyou.chenx221;
//实验二 2
import java.util.Scanner;

public class test100802 {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
//		System.out.println("请输入一个数来完成N!的计算："); //for test
//		int n = scanner.nextInt(); //for test
		test100802 testfun = new test100802();
//		System.out.println(testfun.jc(n)); //for test
		System.out.println("5!+6!+7!+8!=" +
			(testfun.jc(5) + testfun.jc(6) + testfun.jc(7) + testfun.jc(8)));
		scanner.close();
	}

	public int jc(int a) {
		if (a == 1)
			return a;
		return a * jc(a - 1);
	}

}
