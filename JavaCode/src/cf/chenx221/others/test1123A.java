package cf.chenx221.others;

public class test1123A {
    public static void main(String[] args) {
        //System.gc();
        //System.exit(666);
        int[] arr1 = new int[]{1,2,3,4,5};
        int[] arr2 = new int[5];
        System.arraycopy(arr1,1,arr2,2,2);
        for (int i:arr1){
            System.out.print(i+" ");
        }
        System.out.println();
        for (int i:arr2){
            System.out.print(i+" ");
        }
        System.out.println();
    }
}
