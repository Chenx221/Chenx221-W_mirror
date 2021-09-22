package cyou.chenx221;

import java.util.Scanner;

//Java 实验三 3
public class test092211 {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int p[][] = new int[4][5];
		float score[][] = new float[4][2];
		float s[] = new float[2];// temp
		for (int i = 1; i <= 4; i++) {
			int max = -1, min = 9999;
			System.out.println("请输入第" + i + "位选手的得分");
			int sum = 0;
			for (int j = 1; j <= 5; j++) {
				p[i - 1][j - 1] = scanner.nextInt();
				sum += p[i - 1][j - 1];
				if (p[i - 1][j - 1] > max)
					max = p[i - 1][j - 1];
				if (p[i - 1][j - 1] < min)
					min = p[i - 1][j - 1];
			}
			score[i - 1][1] = (float) (sum - max - min) / 3;
			score[i - 1][0] = i;
		}

		for (int i = 0; i < 3; i++) {
			int max = i;
			for (int j = i + 1; j <= 3; j++)
				if (score[j][1] > score[max][1])
					max = j;
			if (i != max) {
				s[0] = score[i][0];
				s[1] = score[i][1];
				score[i][0] = score[max][0];
				score[i][1] = score[max][1];
				score[max][0] = s[0];
				score[max][1] = s[1]; // swap
			}
		}

		for (int i = 0; i < 4; i++) {
			System.out.println("选手" + (int) score[i][0] + "名次是" + (i + 1) + " 最终得分是：" + score[i][1]);
		}
		scanner.close();
	}
}
