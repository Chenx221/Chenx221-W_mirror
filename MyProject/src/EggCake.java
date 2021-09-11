
public class EggCake {

	int eggCount;
	
	public EggCake(int eggCount) {
		this.eggCount = eggCount;
		System.out.println(this.eggCount);
	}
	
	public EggCake() {
		this(1);
	}
	

	public static void main(String[] args) {
		// TODO 自动生成的方法存根
		EggCake e1 = new EggCake(5);
		EggCake e2 = new EggCake();
	}

}
