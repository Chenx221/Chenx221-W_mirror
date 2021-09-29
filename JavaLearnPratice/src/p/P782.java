package p;

//矩形
public class P782 {
	private double x, y;

	public P782(double a, double b) {
		x = a;// 长
		y = b;// 宽
	}

	public double calArea() {// 计算面积
		return x * y;
	}

	public static void main(String[] args) {
		P782 ptest = new P782(10,20);
		System.out.println("面积:"+ptest.calArea());
	}
}
