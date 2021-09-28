package p;

public class P674 {

	public static void main(String[] args) {
		int numarr[][] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
		for (int x[] : numarr) {
			for (int y : x)
				System.out.print(y + " ");
			System.out.println();
		}
		System.out.println();
		for (int i = 1; i <= numarr.length; i++) {
			for (int j = 1; j <= i; j++) {
				if (i == j)
					continue;
				int temp = numarr[i - 1][j - 1];
				numarr[i - 1][j - 1] = numarr[j - 1][i - 1];
				numarr[j - 1][i - 1] = temp;
			}
		}

		for (int x[] : numarr) {
			for (int y : x)
				System.out.print(y + " ");
			System.out.println();
		}

	}

}
