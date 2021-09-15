package cyou.chenx221;

import java.util.Scanner;

public class Test0915_02 {
	public static void main(String[] args) {
		int numxnum[][] = new int[9][9];
		for (int i = 1;i<=9;i++) {
			for (int j = 1; j<=9;j++) {
				numxnum[i-1][j-1]=i*j;
			}
		}
		Scanner scanner = new Scanner(System.in);
		int n1=scanner.nextInt(),n2=scanner.nextInt();
		System.out.println(n1+"x"+n2+"="+numxnum[n1-1][n2-1]);
////////////////////////////////////////////////////////////////////////////////////////////
		String sarr[][] = {{"text1","text2"},{"text3","text4"},{"text5","text6"}};
//		for (String x[] :sarr) {
//			for (String y:x) {
//				System.out.println(y);
//			}
//		}
		for (int i =0;i<sarr.length;i++)
			for (int j=0;j<sarr[i].length;j++) 
				System.out.println(sarr[i][j]);
	}
}
