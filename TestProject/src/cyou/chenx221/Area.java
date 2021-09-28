package cyou.chenx221;
import java.util.Scanner;
public class Area {
	static float PI = 3.1415926f;
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		float r,high;
		System.out.print("请输入半径：");
		r=scanner.nextFloat();
		System.out.print("请输入高：");
		high=scanner.nextFloat();
		System.out.println("体积为"+volume(r,high));
		
		scanner.close();
	}
	public static float volume(float a,float b) {
		return PI*a*a*b;
	}
}
