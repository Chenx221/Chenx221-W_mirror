package cyou.chenx221;
//方法的重载 包含未设定数量的参数
public class book183 {
    public static int add(int a,int b) {
        return a+b;
    }
    public static int add(int a,int b,int c) {
        return a+b+c;
    }
    public static int add(int...a){
        int sum=0;
        for(int x:a){
            sum+=x;
        }
        return sum;
    }

    public static void main(String[] args) {
        book183 b1 = new book183();
        System.out.println(b1.add(1,1));
        System.out.println(b1.add(1,1,1));
        System.out.println(b1.add(1,1,1,1,1,1,1,1,1,1,1));
    }
}
