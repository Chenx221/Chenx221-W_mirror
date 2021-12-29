package cyou.chenx221;

interface Open_Close {
    void Open();

    void Close();

}

class DCD implements Open_Close {

    public void Open() {
        System.out.println("光驱打开");
    }

    public void Close() {
        System.out.println("光驱关闭");
    }

}

class Mouse implements Open_Close {

    public void Open() {
        System.out.println("鼠标连接");
    }

    public void Close() {
        System.out.println("鼠标断开连接");
    }

}

public class Test {
    public static void main(String[] args) {
        Open_Close o1 = new DCD();
        Open_Close o2 = new Mouse();
        o1.Open();
        o1.Close();
        o2.Open();
        o2.Close();
    }

}
