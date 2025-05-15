class Animal {
Animal() {
System.out.println("Animal constructor"); }
}
class Dog extends Animal {
Dog() {
super();
System.out.println("Dog constructor"); }
}
public class Msuper {
    public static void main(String[] args) {
          Dog dog = new Dog();
    }
}
