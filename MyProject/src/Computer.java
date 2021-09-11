
public class Computer {
	public static void main(String[] args) {
		Pad ipad = new Pad();
		LenovoPad lenovopad = new LenovoPad();
		
		System.out.println(ipad instanceof Computer);
		System.out.println(lenovopad instanceof Pad);
		System.out.println(lenovopad instanceof Computer);
		System.out.println(ipad instanceof LenovoPad);

	}
}

class Pad extends Computer{
	
}

class LenovoPad extends Pad{
	
}
