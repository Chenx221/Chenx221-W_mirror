package p;
// 6.7.3
import java.util.Arrays;
public class P673 {
	public static void main(String[] args) {
		String carr[] = new String[] {"h","e","l","l","o","w","o","r","l","d"};
		for (String x:carr)
			System.out.print(x);
		System.out.println();
		Arrays.fill(carr, 2, 3, "bb");
		for (String x:carr)
			System.out.print(x);
		System.out.println();
	}
}
