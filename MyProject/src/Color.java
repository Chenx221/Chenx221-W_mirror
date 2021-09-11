
public abstract class Color {//抽象类是不能实例化的
	public void show() {
		

	}
}

class Red extends Color{
	public void show() {
		System.out.println("我是红色");

	}
}

class Blue extends Color{
	public void show() {
		// TODO 自动生成的方法存根
		System.out.println("我是蓝色");
	}
}