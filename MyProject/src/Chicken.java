
public class Chicken extends Bird{

	public Chicken(String feather) {
		super(feather);
		System.out.println("我是一只小鸡");
	}

	@Override
	public void move() {
		System.out.println("小鸡快跑");
		
	}

	@Override
	public void eat() {
		System.out.println("小鸡吃米");
		
	}
	
}
