package cyou.chenx221;

class worker extends person {
    private String occupation;

    public worker(String i, String n, String o) {
        super(i, n);
        occupation = o;
    }

    public void printInfo() {
        super.printInfo();
        System.out.println("职业:" + occupation);
    }
}

class person {
    private String id;
    private String name;

    public person(String i, String n) {
        id = i;
        name = n;
    }

    public void printInfo() {
        System.out.println("身份证号:" + id + "\n姓名:" + name);
    }

}

public class sy1 {
    public static void main(String[] args) {
        person p1 = new person("3310", "陈");
        p1.printInfo();
        worker w1 = new worker("3310", "陈", "学生");
        w1.printInfo();
    }

}