package cyou.chenx221;

public class T81_02 {
	public static void main(String[] args) {//指定数输出二进制八进制十进制十六进制
		String s1 = Integer.toBinaryString(64);
		String s2 = Integer.toOctalString(64);
		String s3 = Integer.toString(64);
		String s4 = Integer.toHexString(64);
		System.out.println(s1+"(B)="+s2+"(O)="+s3+"(D)="+s4+"(H)");
	}
}
