package cyou.chenx221;

//实验三 2、3
public class Student {
    private String sNO;
    private String sName;
    private double sJava;
    private static int count = 0; //实验三 3内容

    {
        count++;
    } //实验三 3内容

    public String getNo() {
        return sNO;
    }

    public String getName() {
        return sName;
    }

    public double getJava() {
        return sJava;
    }

    public Student() {
    }

    public Student(String no, String name, double javaScore) {
        sNO = no;
        sName = name;
        sJava = javaScore;
    }

    public static int getCount() { //实验三 3内容
        return count; //实验三 3内容
    } //实验三 3内容

    public static void main(String[] args) {
        Student s1 = new Student("001", "无名氏1", 60);
        Student s2 = new Student("002", "无名氏2", 99);
        System.out.println("学号" + s1.getNo() + "\t姓名:" + s1.getName() + "\tJava成绩:" + s1.getJava());
        System.out.println("学号" + s2.getNo() + "\t姓名:" + s2.getName() + "\tJava成绩:" + s2.getJava());
        System.out.println("成绩平均值:" + (s1.getJava() + s2.getJava()) / 2);
        //Student s3 = new Student(); //test


        System.out.println("学生数:" + getCount()); //实验三 3内容
    }
}
