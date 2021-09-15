package cyou.chenx221;
import java.util.Scanner;
public class Test0915_06 {

	public static void main(String[] args) {

		Scanner scanner = new Scanner(System.in);
		int sum=0,n=scanner.nextInt();
		for (int i =2;i<=n;i+=2)
			sum+=i;
		System.out.println(sum);
		
		
	}

}
