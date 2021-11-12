package cyou.chenx221;

import java.util.Scanner;

abstract class Graphics {
    protected double perimeter;
    protected double area;
}

class Rectangle extends Graphics { //矩形
    protected double length1, length2;//长宽

    public Rectangle(double a1, double a2) {
        length1 = a1;
        length2 = a2;
    }

    public void cal() {
        perimeter = (length1 + length2) * 2;
        area = length1 * length2;
        System.out.println("周长:" + perimeter + "\t面积:" + area);
    }
}

class Square extends Rectangle { //正方形
    public Square(double a1) {
        super(a1, 999);
    }

    public void cal() {
        perimeter = length1 * 4;
        area = Math.pow(length1, 2);
        System.out.println("周长:" + perimeter + "\t面积:" + area);
    }

}

class Circle extends Graphics { //圆
    protected double radius;

    public Circle(double a1) {
        radius = a1;
    }

    public void cal() {
        perimeter = 2 * Math.PI * radius;
        area = Math.PI * Math.pow(radius, 2);
        System.out.println("周长:" + perimeter + "\t面积:" + area);
    }
}

class Triangle extends Graphics { //三角形
    protected double length1, length2, length3;

    public Triangle(double a1, double a2, double a3) {
        length1 = a1;
        length2 = a2;
        length3 = a3;
    }

    public void cal() {
        perimeter = length1 + length2 + length3;
        System.out.println("周长:" + perimeter + "\t面积:【未实现】");
    }
}

public class G_Cl {
    public static void main(String[] args) {
        System.out.println("###################################################\n(a) 矩形\t(b) 正方形\t(c) 圆\t(d) 三角形\t(e) 退出\n###################################################");//MENU
        Scanner scanner = new Scanner(System.in);
        String c1 = scanner.next();
        while(!c1.equals("e")) {
            if (c1.equals("a")) {
                Rectangle r1 = new Rectangle(scanner.nextDouble(), scanner.nextDouble());
                r1.cal();
            }
            else if (c1.equals("b")) {
                Square s1 = new Square(scanner.nextDouble());
                s1.cal();
            }
            else if (c1.equals("c")) {
                Circle ci1 = new Circle(scanner.nextDouble());
                ci1.cal();
            }
            else if (c1.equals("d")) {
                Triangle t1 = new Triangle(scanner.nextDouble(), scanner.nextDouble(), scanner.nextDouble());
                t1.cal();
            }
            else {
                System.out.println("输入错误");
            }
            c1 = scanner.next();
        }
        System.out.println("程序已退出");
    }
}
