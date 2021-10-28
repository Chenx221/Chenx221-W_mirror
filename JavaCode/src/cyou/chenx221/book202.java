package cyou.chenx221;

public class book202 {
    inclass in = new inclass();

    public void getgetnum() {
        in.getnum();
    }

    class inclass {
        public int getnum() {
            return 114514;
        }

        int temp;
    }

    public inclass doit(){
        in.temp=666;
        return new inclass();
    }
    public static void main(String[] args) {
        book202 b = new book202();
        book202.inclass i1 = b.doit();
        book202.inclass i2 = b.new inclass();
    }


}
