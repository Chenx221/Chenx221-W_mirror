package cyou.chenx221;
class Animal {
    public Animal(String name) {
        System.out.println(name);
    }

}

class Dog extends Animal {
    public Dog() {
        super("???");
    }
}
public class example01 {


    public static void main(String[] args) {
        Dog dog = new Dog();
    }

}
