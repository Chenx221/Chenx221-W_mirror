package main;

public class main {
    String name;
    int age;
    String id;

    public void setName(String name) {
        this.name = name;
    }

    public void setAge(int age) {
        this.age = age;
    }

    public void setId(String id) {
        this.id = id;
    }

    void getallinfo(){
        System.out.println(name+age+id);
    }
    public static void main(String[] args) {
        main a = new main();
        a.setAge(18);
        a.setId("001");
        a.setName("unknown");
        a.getallinfo();
    }
}
