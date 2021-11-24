package cf.chenx221.others;

import java.util.ArrayList;
import java.util.Iterator;

public class arraylist1124A {
    public static void main(String[] args) {
        ArrayList al1 = new ArrayList();
        int time = 0;
        al1.add(Math.random());al1.add(Math.random());al1.add(Math.random());al1.add(Math.random());al1.add(Math.random());//add x5
        for (int i =0;i<=4;i++){
            System.out.println(al1.get(i));
        }
        System.out.println("size:"+al1.size());
        Iterator it = al1.iterator(); //迭代器
        while (it.hasNext()){
            System.out.println(it.next());
        }


    }
}
