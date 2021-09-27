package cyou.chenx221;

import java.util.Arrays;

public class test0927 {
	public static void main(String[] args) {
		int arr[] = new int[] { 1, 3, 5, 7, 9, 11, 5, 10, 3, 1 };
		// 									0  1   2  3  4   5    6  7   8   9
		int cparr[] = Arrays.copyOf(arr, 6);// 复制ARR数组，指定长度
		int ccparr[] = Arrays.copyOfRange(arr, 1, 4);// 复制ARR数组从下标0~3（不包含4）

		// Search Start
		System.out.println(Arrays.binarySearch(arr, 4, 8, 10));
		// Search End

		// Print Start
		System.out.print("arr[]:");
		for (int x : arr)
			System.out.print(x + " ");
		System.out.println();

		System.out.print("cparr[]:");
		for (int x : cparr)
			System.out.print(x + " ");
		System.out.println();

		System.out.print("ccparr[]:");
		for (int x : ccparr)
			System.out.print(x + " ");
		System.out.println();
		// Print End
	}
}
