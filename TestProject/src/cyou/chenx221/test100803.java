package cyou.chenx221;

import java.util.Scanner;

//实验二 3
public class test100803 {
	final double PI = 3.1415926;

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		System.out.println("请输入半径或长宽，求圆面积第二个参数请输入-1：");
		double a = scanner.nextDouble();
		double b = scanner.nextDouble();
		test100803 testfun = new test100803();
		if (b == -1)
			System.out.println("半径为" + a + "的圆的面积为" + testfun.Area(a));
		else
			System.out.println("长为" + a + ",宽为" + b + "的长方形的面积为" + testfun.Area(a, b));
		scanner.close();
	}

	public double Area(double x) {
		return PI * x * x;
	}

	public double Area(double x, double y) {
		return x * y;
	}

}
