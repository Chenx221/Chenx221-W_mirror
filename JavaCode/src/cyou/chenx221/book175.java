package cyou.chenx221;
class Parent{
    Parent(){
        System.out.println("调用Parent()构造方法");
    }
}
class SubParent extends Parent{
    SubParent(){
        System.out.println("调用SubParent()构造方法");
    }
}
class Subroutine extends SubParent{
//    public String toString(){
//        return "TEST"+getClass().getName()+"TEST";
//    }
    Subroutine(){
        System.out.println("调用Subroutine()构造函数");
        System.out.println(getClass().getName()); //output class name
    }
}
public class book175 {
    public static void main(String[] args) {
        Subroutine s = new Subroutine();
        System.out.println(s);
    }
}
