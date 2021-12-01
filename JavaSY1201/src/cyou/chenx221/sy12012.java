package cyou.chenx221;

class person {//题目给定的person类
    private String name;

    public person(String name) {
        this.name = name;
    }

    public void printInfo() {
        System.out.println("姓名:" + name);
    }
}

class Student extends person{//要求写出的Student类
    private String major;
    public Student(String name,String major){
        super(name);
        this.major=major;
    }
    public void printInfo(){
        super.printInfo();//调用父类的打印方法输出姓名
        System.out.println("专业:"+major);
    }

}
public class sy12012 {
    public static void main(String[] args) {
        Student testS = new Student("小明","计算机专业");
        testS.printInfo();
    }
}
