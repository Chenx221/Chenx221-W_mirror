package cyou.chenx221;
class A{
    int x;
    public A(int a){
        x=a;
    }
    public void printInfo(){
        System.out.println("x="+x);
    }
}
class B extends A{
    int y;
    public B(int a,int b){
        super(a);
        y=b;
    }
    public void printInfo(){
        System.out.println("x="+x+"\ty="+y);
    }

}
public class test21102603 {
    public static void main(String[] args) {
        B test1 = new B(2333,6666);
        test1.printInfo();
    }
}
