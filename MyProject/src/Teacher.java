
public abstract class Teacher {//抽象类
	abstract public void teaching();//抽象方法
}

class MathTeacher extends Teacher {
	@Override
	public void teaching() {
		System.out.println("我们来讲一下三角函数");
	}
}

class EnglishTeacher extends Teacher {
	public void teaching() {
		System.out.println("open the book");
	}
}