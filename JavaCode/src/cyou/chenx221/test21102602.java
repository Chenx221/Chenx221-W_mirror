package cyou.chenx221;

interface humanDo {
    void doing();

}
class human {
    String name;
    String sex;
}
class male extends human implements humanDo {
    public void doing() {
        System.out.println("test,male");

    }

    {
        sex = "male";
    }

    public male() {
        super();
    }

    public male(String a1) {
        name = a1;
    }
}

class female extends human implements humanDo {
    public void doing() {
        System.out.println("test,female");
    }

    {
        sex = "female";
    }

    public female() {
        super();
    }

    public female(String a1) {
        name = a1;
    }
}

public class test21102602 {
    public static void main(String[] args) {
        male p1 = new male("unknown 1");
        female p2 = new female("unknown 2");
        p1.doing();
        p2.doing();
    }
}
