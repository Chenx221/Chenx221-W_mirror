package main;

public class Circle {
    final double PI = 3.1415026;
    private double redius;

    public double area() {
        return redius * PI * redius;
    }

    public void setRedius(double redius) {
        this.redius = redius;
    }

    public static void main(String[] args) {
        Circle c1 = new Circle();
        c1.setRedius(10.5);
        System.out.println(c1.area()0);
    }
}
