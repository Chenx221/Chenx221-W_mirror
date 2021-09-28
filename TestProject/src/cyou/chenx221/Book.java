package cyou.chenx221;

public class Book {
	public Book() {
		this("Default value");
	}
	public Book(String name) {
		this.name = name;
	}
	
	private String name;
	public String getName() {
		return this.name;
	}
	public void setName(String name) {
		this.name=name;
	}
	
	
	
	
	
	
	
	
	public static void main(String[] args) {
		Book b1 = new Book();
//		b1.setName("JPM");
		System.out.println(b1.getName());
	}

}
