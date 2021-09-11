package p;

import java.util.Scanner;

public class P591 {

	public static void main(String[] args) {
		Scanner scan1 = new Scanner(System.in);
		String st = scan1.next();
		
		String stu,stl;
		stu=st.toUpperCase();
		stl=st.toLowerCase();
		
		System.out.println("源文本: "+st+"\n转换为大写后: "+stu+"\n转换为小写后: "+stl);

	}

}
