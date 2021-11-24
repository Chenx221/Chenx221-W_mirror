package cf.chenx221.others;

import java.util.Random;
import java.util.Scanner;

public class randGen {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Random rd = new Random();
        int range1=scanner.nextInt();
        int range2=scanner.nextInt();
        double v = rd.nextDouble();
        System.out.println(Math.round(v*(range2-range1)+range1));
        System.out.println(rd.nextInt(100));System.out.println(rd.nextInt(100));System.out.println(rd.nextInt(100));
    }
}
