package cyou.chenx221;

public class P882 {
    public static void main(String[] args) {
        Character c1 = new Character('A');//可以缩略成line6的写法
        Character c2 = 'a';
        System.out.println(c1+"与"+c2+"相等吗?"+c1.equals(c2));
        Character c3 = Character.toLowerCase(c1);
        Character c4 = Character.toLowerCase(c2);
        System.out.println("转换为小写后,"+c3+"与"+c4+"相等吗?"+c3.equals(c4));
    }
}
