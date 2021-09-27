package p;

//6.7.1
import java.util.Arrays;

public class P671 {

	public static void main(String[] args) {
		int arr1[] = new int[] { 1, 2, 3, 4, 5 };
		int arr2[] = Arrays.copyOfRange(arr1, 0, 4);
		for (int x : arr1)
			System.out.print(x + " ");
		System.out.println();
		for (int x : arr2)
			System.out.print(x + " ");
		System.out.println();
	}

}
