package p;

public class P783 {
	public static void main(String[] args) {// 根据参数个数返回指定数量的i
		int i = 6;
		if (args.length == 0)
			System.out.println("ERROR");
		else
			for (int j = 1; j <= args.length; j++)
				System.out.print(i);
	}
}
