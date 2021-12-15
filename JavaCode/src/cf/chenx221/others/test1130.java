package cf.chenx221.others;
//根据datanum.txt文件中01内容转换为字符显示并输出result.txt
import java.io.BufferedInputStream;
import java.io.BufferedOutputStream;
import java.io.FileInputStream;
import java.io.FileOutputStream;

public class test1130 {
    public static void main(String[] args) throws Exception {
        int[][] iarr = new int[38][40];//修改这里，如果有数据规模上的变动
        char[][] carr = new char[38][40];//同上
        //input data start
        BufferedInputStream fis = new BufferedInputStream(new FileInputStream("C:/Users/Chenx221/Desktop/11111.txt"));//文件路径
        for (int i = 0; i < iarr.length; i++) {
            for (int j = 0; j < iarr[i].length; j++) {
                iarr[i][j] = fis.read() - 48;
                if (iarr[i][j] >= 0 && iarr[i][j] <= 9) continue;
                j--;
            }
        }
        fis.close();
        //input data end

        //convert int to char start
        int x = 0, y = 0;
        for (int[] i : iarr) {
            for (int j : i) {
                switch (j) {
                    case 0:
                        carr[y][x++] = ' ';
                        break;
                    case 1:
                        carr[y][x++] = '*';
                        break;
                    default:
                        System.exit(10); //error
                }
            }
            y++;
            x = 0;
        }
        //convert int to char end

        //output result to console start
        for (char[] i : carr) {
            for (char j : i) {
                System.out.print(j);
            }
            System.out.println();
        }
        //output result to console end

        //output result to file start
        BufferedOutputStream fos = new BufferedOutputStream(new FileOutputStream("result.txt"));
        for (char[] i : carr) {
            for (char j : i) {
                fos.write(j);
            }
            fos.write('\n');
        }
        fos.close();
        //output result to file end

        Runtime rt = Runtime.getRuntime();
        rt.exec("notepad result.txt");
    }
}
