package cyou.chenx221.work1103;

interface Figure {
    void Area();
}

class Rectangle implements Figure {
    private double length;
    private double width;

    public void setLength(double length) {
        this.length = length;
    }

    public void setWidth(double width) {
        this.width = width;
    }

    public void Area() {
        System.out.println("矩形的面积是" + (length * width));
    }
}

class Square implements Figure {
    private double side;

    public void setSide(double side) {
        this.side = side;
    }

    public void Area() {
        System.out.println("正方形的面积是" + Math.pow(side, 2));
    }
}

public class sy3 {
    public static void main(String[] args) {
        Rectangle r1 = new Rectangle();
        r1.setLength(10.0);
        r1.setWidth(20.0);
        Square s1 = new Square();
        s1.setSide(5);
        r1.Area();
        s1.Area();
    }
}
