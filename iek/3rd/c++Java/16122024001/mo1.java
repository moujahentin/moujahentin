import java.util.Scanner;

public class mo1{
    public static void main(String[] args) {
		int numx,count=0,sum=0;
		Scanner scanner=new Scanner(System.in);
		while(true){
			System.out.println("Dose enan akeraio : ");
			numx=scanner.nextInt();
			if(numx==-1){
				break;
				}		
			if(numx >= 0 && numx <= 100 ){	
				sum+=numx;
				count+=1;
			}
			else {
			System.out.println("Dose enan akeraio apo 0-100");
				}
		}
 		if (count > 0) { 
            System.out.println("Sum = " + sum);
            System.out.println("Mo = " + (double) sum / count); 
			} 
        else {
            System.out.println("Den dothikan egkyroi arithmoi.");
			}	
		}
}
