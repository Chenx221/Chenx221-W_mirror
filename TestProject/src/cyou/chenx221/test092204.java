package cyou.chenx221;

// Java实验一 4选做
public class test092204 {
	public static void main(String[] args) {
		for (int i =1;i<=5;i++) {
			for (int k=1;k<=5-i;k++) 
				System.out.print("  ");
			for (int j = i;j>=1;j--) 
				System.out.print(j+" ");
			System.out.println();
		}
	}
}
