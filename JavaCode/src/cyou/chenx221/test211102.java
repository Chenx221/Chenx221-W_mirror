package cyou.chenx221;

class Complex {
    private int realPart, imagePart;

    public Complex() {
        //毛都没有
    }

    public Complex(int r, int i) {
        realPart = r;
        imagePart = i;
    }

    public Complex addComplex(Complex c) {
        Complex tempC = new Complex(realPart, imagePart);
        tempC.realPart += c.realPart;
        tempC.imagePart += c.imagePart;
        return tempC;
    }

    public void printInfo() {
        System.out.println(realPart + "+" + imagePart + "i");
    }
}

public class test211102 {
    public static void main(String[] args) {
        Complex c1 = new Complex(1, 2);//1+2i
        Complex c2 = new Complex(1, 2);//1+2i
        c1 = c1.addComplex(c2);
        c1.printInfo();
    }
}
