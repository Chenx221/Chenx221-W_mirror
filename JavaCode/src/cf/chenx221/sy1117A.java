package cf.chenx221;

class Account {
    private String id; //账号
    private double balance; //余额

    Account(String i, double b) { //开户
        id = i;
        balance = b;
        System.out.println("开户成功");
    }

    public void add_balance(double money) { //存款
        balance += money;
        System.out.println("存款成功");
    }

    public void reduce_balance(double money) { //取款
        if (balance < money) {
            System.out.println("余额不足");
        } else {
            balance -= money;
            System.out.println("取款成功");
        }
    }

    public void show_balance(){ // 查询余额
        System.out.println("余额:"+balance);
    }


}

public class sy1117A {
    public static void main(String[] args) {
        Account a1 = new Account("1111",0);
        a1.show_balance();
        a1.add_balance(100000);
        a1.show_balance();
        a1.reduce_balance(5000);
        a1.show_balance();
    }
}
