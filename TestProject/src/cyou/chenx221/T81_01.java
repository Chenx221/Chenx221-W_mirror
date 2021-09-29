package cyou.chenx221;

public class T81_01 {
	public static void main(String[] args) {
		Integer number = new Integer(996);
		Integer number2 = new Integer("997");
		// System.out.println(number.byteValue()); // out of range // 以byte型输出
		System.out.println(number.compareTo(number2));// 大小比较 小负等0大正
		System.out.println(number.equals(number2));// 比较是否相等 t/f
		System.out.println(number.intValue());// 以int型输出
		System.out.println(number.shortValue());// 以short型输出
		System.out.println(number.toString());// 转换成string
		
		String s[] = new String[] {"01","03","11","15","19","23"};
		int sum=0;
		for (int i =1;i<=s.length;i++) {
			int k = Integer.parseInt(s[i-1]);
			sum+=k;
		}
		System.out.println(sum);
		
		int arr[][] = new int[][] {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
		for (int x[]:arr) {
			for (int y:x)
				System.out.print(y);
			System.out.println();
		}
	}
}
