package cyou.chenx221;

//实验三 1
public class circle_noerror {
    private double radius;

    public circle_noerror() {
    }

    public circle_noerror(double r) {
        radius = r;
    }

    public double getArea() {
        return Math.PI * Math.pow(radius, 2);
    }

    public double getPerimeter() {
        return 2 * Math.PI * radius;
    }


    public static void main(String[] args) {
        circle_noerror c1 = new circle_noerror();
        circle_noerror c2 = new circle_noerror(10);
        System.out.println("c2的圆面积:"+c2.getArea()+"\t周长:"+c2.getPerimeter());
    }
}
