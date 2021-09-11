package p;

public class P463 {

	public static void main(String[] args) {
		int i = 1;
		double sum = 0,num=1;

		while (i <= 20) {
			sum+=num;
			i++;
			num/=(double)i;
		}
		System.out.println("1+1/2!+1/3!+...+1/20!="+sum);

	}

}
