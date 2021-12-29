package cf.chenx221;

import java.util.Scanner;

public class sy1117C {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String stb1 = new String(scanner.next());
        String arr[]=stb1.split(",");
        for (int i=0;i<arr.length;i++){
            arr[i]=arr[i].substring(0,1).toUpperCase()+arr[i].substring(1);
        }
        for (String i:arr){
            System.out.println(i);
        }

    }
}
