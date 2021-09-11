import javax.swing.JOptionPane;

/*
 * 自定义异常
 */
public class NonHumansException extends Exception{
	String message;
	
	public NonHumansException(String message) {
		super(message);
		this.message = message;
		
	}
	
	@Override
	public void printStackTrace() {
		// TODO 自动生成的方法存根
		super.printStackTrace();
		JOptionPane.showMessageDialog(null, message,"发生异常",JOptionPane.ERROR_MESSAGE);
	}
}
