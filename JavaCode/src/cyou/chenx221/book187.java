package cyou.chenx221;
//抽象类
abstract class test {
    abstract void showInfo();

    abstract void showInfoV2();


}
class testcl1 extends test{
    public void showInfo(){
        System.out.println("test");
    }
    public void showInfoV2(){
        System.out.println("testv2");
    }

}
public abstract class book187 {

    public static void main(String[] args) {
        testcl1 t = new testcl1();
        t.showInfo();
        t.showInfo();
    }
}
