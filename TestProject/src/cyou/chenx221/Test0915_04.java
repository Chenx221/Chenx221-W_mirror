package cyou.chenx221;

import java.util.Arrays;

public class Test0915_04 {
	public static void main(String[] args) {
		int arr[] = new int[] {1,2,3,4,5,6,7,8,9,10};
		for (int x:arr) 
			System.out.print(x+" ");
		System.out.println();
		Arrays.fill(arr, 996); //填充args2到args1数组中的元素
		for (int x:arr) 
			System.out.print(x+" ");
		System.out.println();
		Arrays.fill(arr, 2, 5, 233); //指定范围的填充,下标,args2包含,args3不包含
		for (int x:arr) 
			System.out.print(x+" ");
	}
}
