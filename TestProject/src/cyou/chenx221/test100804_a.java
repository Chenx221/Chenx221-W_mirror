package cyou.chenx221;

public class test100804_a {
	public static void main(String[] args) {
		int[] arr = new int[] { 111, 222, 333, 444, 555, 666, 777, 888, 999 };
		for (int x : arr)
			System.out.print(x+" ");
		System.out.println();
		for (int i = 1; i <= arr.length / 2; i++) {
			int temp = arr[i-1];
			arr[i-1] = arr[arr.length-i];
			arr[arr.length-i]=temp;
		}
		for (int x : arr)
			System.out.print(x+" ");
		System.out.println();
	}
}
