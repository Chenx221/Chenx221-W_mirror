
public class Seagull extends Bird{

	public Seagull(String feather) {
		super(feather);
		System.out.println("我是一只海鸥");
	}

	@Override
	public void move() {
		System.out.println("海鸥飞翔");
		
	}

	@Override
	public void eat() {
		System.out.println("海鸥吃鱼");
		
	}

}
