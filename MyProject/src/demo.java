
public class demo {

	public static void main(String[] args) {
		String playerType = "monkey";

		try {
			if (!playerType.equals("human")) {
				throw new NonHumansException("有非人类的选手" + playerType);

			}
			System.out.println("开始比赛");
		} catch (NonHumansException e) {
			// TODO 自动生成的 catch 块
			e.printStackTrace();
		}
	}
}
