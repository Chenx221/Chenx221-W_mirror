package cyou.chenx221.w1110;//不需要

class Animal {
    private String color;
    private int age;

    public void setAge(int age) {
        this.age = age;
    }

    public void setColor(String color) {
        this.color = color;
    }

    public int getAge() {
        return age;
    }

    public String getColor() {
        return color;
    }

    public Animal() {
    }

    public Animal(String color, int age) {
        this.color = color;
        this.age = age;
    }
}

public class w211110a { //自己改掉
    public static void main(String[] args) {
        Animal a1 = new Animal();
        Animal a2 = new Animal("Blue", 2);
        a1.setColor("black");
        a1.setAge(1);
    }
}
