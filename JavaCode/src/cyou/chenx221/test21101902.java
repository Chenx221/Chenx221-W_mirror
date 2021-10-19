package cyou.chenx221;
import java.text.DecimalFormat;
public class test21101902 {
    static public void SingleFormat(String pattern, double value){
        DecimalFormat myFormat = new DecimalFormat(pattern);
        String s1= myFormat.format(value);
        System.out.println(value +" "+ pattern+" "+s1);
    }
    static public void UseApplyPatternFormat(String pattern,double value){
        DecimalFormat myApplyFormat = new DecimalFormat();
        myApplyFormat.applyPattern(pattern);
        System.out.println(value +" "+ pattern+" "+myApplyFormat.format(value));
    }

    public static void main(String[] args) {
        SingleFormat("###,###,###",123456789);
        UseApplyPatternFormat("###.##%",0.78951);
        DecimalFormat myFormat2 = new DecimalFormat();
        myFormat2.setGroupingSize(3);
        System.out.println(myFormat2.format(999666333));
    }
}
