class Calculator {
     public int calculate(int a, int b) {
        return 0; 
	}
	public double calculate(double a, double b){
		return 0;
	}
}
class Sum extends Calculator {
	@Override
    public int calculate(int a, int b) {
        return a + b; 
         }
    public double calculate(double a, double b){
		return a + b;
	}
}
class Multiply extends Calculator {
	@Override
    public int calculate(int a, int b) {
        return a * b;
         }
    public double calculate(double a, double b){
		return a * b;
	}
}
public class calculator {
    public static void main(String[] args) {
        Calculator sum = new Sum();
        Calculator multiply = new Multiply();
        int num1 = 10;
        int num2 = 5;
        System.out.println("Sum: " + sum.calculate(num1, num2)); 
		System.out.println("Multiply: " + multiply.calculate(num1, num2));
		Calculator sum2 = new Sum();
        Calculator multiply2 = new Multiply();
        double num3 = 10.5;
        double num4 = 5.3;
        System.out.println("Sum: " + sum2.calculate(num3, num4)); 
		System.out.println("Multiply: " + multiply2.calculate(num3, num4));
    
    }
}
