abstract class Shape {
    abstract void area();   
}
class Circle extends Shape {
	@Override
     void area(){
		System.out.println("Circle"); 
         }
}
class Rectangle extends Shape {
	@Override
    void area(){
		System.out.println("Rectangle"); 
         }
}
public class shape {
    public static void main(String[] args) {
        Shape circle = new Circle();
        Shape rectangle = new Rectangle();
        circle.area();
        rectangle.area();
    }
}
