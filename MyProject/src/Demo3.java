
public class Demo3 {
	public OutInterface2 action() {
		return new OutInterface2() {
			private int i = 0;
			public int getValue() {
				return i;
			}
		};
	}
}

interface OutInterface2{
	
}