package cyou.chenx221;
interface shape{
    public double area();
}
class circle implements shape{
    private double radius;
    public circle(double r){
        radius = r;
    }

    public double getRadius() {
        return radius;
    }

    public double area(){
        return Math.PI*Math.pow(radius,2);
    }
}
public class test211102A {
    public static void main(String[] args) {
        circle c = new circle(10);
        System.out.println("半径为"+c.getRadius()+"的圆面积为:"+c.area());
    }
}
