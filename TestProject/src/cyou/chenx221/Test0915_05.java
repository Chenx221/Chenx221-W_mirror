package cyou.chenx221;

import java.util.Arrays;

//import java.util.Scanner;

public class Test0915_05 {

	public static void main(String[] args) {
//		Scanner scanner = new Scanner(System.in);
		int arr[] = new int[] {666,1,2,3,4,5,6,7,8,9,10};
		for (int x : arr) {
			System.out.print(x+" ");
		}
		System.out.println();
		Arrays.sort(arr);//升序排序
		for (int x : arr) {
			System.out.print(x+" ");
		}
		System.out.println();
//		int arr2[] = Arrays.copyOf(arr, 5);//copy数组指定长度
//		for (int x : arr2) {
//			System.out.print(x+" ");
//		}
//		int arr2[] = Arrays.copyOf(arr, 20);//copy数组指定长度，超出部分用0填充
//		for (int x : arr2) {
//			System.out.print(x+" ");
//		}
		int arr2[] = Arrays.copyOfRange(arr, 1, 20);//copy数组指定起始结束位置，超出部分用0填充
		for (int x : arr2) {
			System.out.print(x+" ");
		}
	}

}
