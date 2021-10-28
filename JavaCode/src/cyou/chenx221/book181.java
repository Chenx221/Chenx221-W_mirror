package cyou.chenx221;

class Quadrangle {
    public static void draw(Quadrangle q) {

    }
}

class Square_bk extends Quadrangle {

}

class Anything {

}

public class book181 extends Quadrangle {
    public static void main(String[] args) {
        Quadrangle q = new Quadrangle();
        System.out.println(q instanceof Quadrangle);
        book181 p = new book181();
        System.out.println(p instanceof Quadrangle);

        if (q instanceof Square_bk) {
            Square_bk s = (Square_bk) q;
        }
        //System.out.println(q instanceof Anything);
    }
}
