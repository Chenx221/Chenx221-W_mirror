package cyou.chenx221;

//反转排序
public class test092702 {
	public static void main(String[] args) {
		int arr[] = new int[] { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
		test092702 test = new test092702();
		test.showarr(arr);
		test.fz(arr);
		test.showarr(arr);
	}

	public void showarr(int[] arr) {
		for (int x : arr) {
			System.out.print(x + " ");
		}
		System.out.println();
	}

	public void fz(int[] arr) {
		for (int i = 1; i <= arr.length / 2; i++) {
			int temp = arr[arr.length - i];
			arr[arr.length - i] = arr[i - 1];
			arr[i - 1] = temp;
		}
	}

}
