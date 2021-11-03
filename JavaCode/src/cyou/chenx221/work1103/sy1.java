package cyou.chenx221.work1103;

import java.text.DecimalFormat;

class Stock {
    private String symbol; //股票代码
    private String name; //股票名称
    private double prePrice; //前一日的股票值
    private double curPrice; //当时的股票值

    public Stock(String s, String n) {
        symbol = s;
        name = n;
    }

    public void setCurPrice(double curPrice) {
        this.curPrice = curPrice;
    }

    public void setPrePrice(double prePrice) {
        this.prePrice = prePrice;
    }

    public double getChange() {
        return (curPrice - prePrice) / prePrice;
    }
}


public class sy1 {
    public static void main(String[] args) {
        Stock s1 = new Stock("ORCL", "Oracle Corporation");
        s1.setPrePrice(34.5);
        s1.setCurPrice(34.35);
        DecimalFormat d1 = new DecimalFormat("0.00%");
        System.out.println("市值变化:" + d1.format(s1.getChange()));

    }
}
