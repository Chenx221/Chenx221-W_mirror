package cyou.chenx221.w1109;

class Book {
    private String name;
    private double price;
    private int count;

    public Book(String n, double p, int c) {
        name = n;
        price = p;
        count = c;
    }

    public double totalPrice() {
        return price * count;
    }

    public void printInfo() {
        System.out.println("书名:" + name + "\t单价:" + price + "\t销量:" + count);
    }
}

public class test1109 {
    public static void main(String[] args) {
        Book b1 = new Book("java", 35, 50);
        System.out.println("销售额:" + b1.totalPrice());
        b1.printInfo();
        try{
            int[] a = new int[5];
            a[0]=1/0;
            a[5]=1;
        }catch(ArrayIndexOutOfBoundsException e){
            System.out.println("ERROR 超出数组范围"+e);
        }
        catch (Exception e){
            System.out.println("ERROR: "+e);
        }
    }
}
