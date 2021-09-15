package cyou.chenx221;
import java.util.Scanner;
public class Test0915 {
	public static void main(String[] args) {
		int day[] = {31,28,31,30,31,30,31,31,30,31,30,31};
		Scanner scanner = new Scanner(System.in);
		System.out.println("请输入月份：");
		int month = scanner.nextInt();
		if (month>0 && month <=12)
			System.out.println("有"+day[month-1]+"天");
		else 
			System.out.println("ERROR");
		
	}
}
