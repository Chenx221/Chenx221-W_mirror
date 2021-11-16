package cf.chenx221;

public class test1116A {
    public static void main(String[] args) {
        String s1 = "192|168|1|1";
        String arr[]=s1.split("\\|");
        for (String i:arr){
            System.out.println(i);
        }
    }
}
