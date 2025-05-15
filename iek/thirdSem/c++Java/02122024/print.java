
class Operation {
    public int calculate(int a, int b) {
        return 0;
    }
}

class Sum extends Operation {
    @Override
    public int calculate(int a, int b) {
        return a + b;
    }
}

class Sub extends Operation {
    @Override
    public int calculate(int a, int b) {
        return a - b;
    }
}

class Multiply extends Operation {
    @Override
    public int calculate(int a, int b) {
        return a * b;
    }
}

public class print {
    public static void main(String[] args) {
        Operation sum = new Sum();
        Operation sub = new Sub();
        Operation multiply = new Multiply();
        int num1 = 10;
        int num2 = 5;
        System.out.println("Sum: " + sum.calculate(num1, num2)); 
        System.out.println("Sub: " + sub.calculate(num1, num2)); 
        System.out.println("Multiply: " + multiply.calculate(num1, num2)); 
    }
}
