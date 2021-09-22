package cyou.chenx221;

// Java实验二 3
public class test092207 {
	public static void main(String[] args) {
		int num = 0;
		for (int i = 1; i <= 9; i++) {
			for (int j = 0; j <= 9; j++) {
				for (int k = 0; k <= 9; k++) {
					num = i * 100 + j * 10 + k;
					if (num == (i*i*i+j*j*j+k*k*k)) {
						System.out.println(num + "是水仙花数，因为" + num + "=" + i + "*" + i + "*" + i + "+" + j + "*" + j
								+ "*" + j + "+" + k + "*" + k + "*" + k);
					}
				}
			}
		}
	}
}
