import java.util.Scanner;

public class sum1{
    public static void main(String[] args) {
		int sum=0;
		for(int i=0;i<5;i++){
		System.out.println("Dose enan akeraio : ");
		Scanner scanner=new Scanner(System.in);
		sum+=scanner.nextInt();
    }
 		System.out.println("Sum =" + sum);
 		
	}
}
