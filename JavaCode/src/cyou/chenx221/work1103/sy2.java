package cyou.chenx221.work1103;

class Person {
    private String name; //人名
    private int age; //年龄
    private String id; //身份证号

    public Person(String n, int a, String i) {
        name = n;
        age = a;
        id = i;
    }

    public String getInfo() {
        return "姓名:" + name + "\t年龄:" + age + "\t身份证号:" + id;
    }
}

class Student extends Person {
    private String sId; //学号
    private String school; //学校

    public Student(String n, int a, String i, String s, String sc) {
        super(n, a, i);
        sId = s;
        school = sc;

    }

    public String getInfo() {
        return super.getInfo() + "\t学号:" + sId + "\t学校:" + school;
    }

}

public class sy2 {
    public static void main(String[] args) {
        Student s1 = new Student("小明", 18, "123456789012345678", "20200000000", "家里蹲大学");
        System.out.println(s1.getInfo());
    }
}
