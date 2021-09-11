
public class Demo2 {

	static {
		System.out.println("静态代码块");
	}
	
	{
		System.out.println("非静态代码块");
	}
	
	public Demo2() {
		System.out.println("构造方法");
	}
	
	public void show() {
		System.out.println("成员方法");
	}
	
	public static void main(String[] args) {
		Demo2 d = new Demo2();
		d.show();
	}

}
