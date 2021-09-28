package cyou.chenx221;
import java.util.Scanner;
public class Leiadd {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int n=scanner.nextInt();
		System.out.println("1+...+"+n+"="+sum(n)); //error for 1
	}
	public static int sum(int n) {
		if (n==1) return n;
		else return n+sum(n-1);
	}
}
