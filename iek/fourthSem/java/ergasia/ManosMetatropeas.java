import java.io.*;
import java.util.Scanner;
public class ManosMetatropeas{
	protected float dekadikos_manos;
	public ManosMetatropeas(){}
	public ManosMetatropeas(String buffer,int psifia){
		oriseTaPsifiaManos(buffer,psifia);
		System.out.println("I timi eisodou itan : "+buffer);
		System.out.println("O dekadikos einai : "+ektiposeDekadiko());
		}
	public void oriseTaPsifiaManos(String buffer,int psifia){
		if(buffer.contains(".")){
			int teleia=buffer.indexOf(".");
			if(buffer.length()>3){
				buffer=buffer.substring(0,teleia+psifia+1);
				}
			else{
				buffer=buffer.substring(0,teleia+psifia);
				}
			setDekadikoManos(buffer);
			}
		}
	public void setDekadikoManos(String buffer){
		try{
			dekadikos_manos=Float.valueOf(buffer).floatValue();
			}
		catch(Exception I_METATROPI_APETYXE){
			System.out.println("I metatropi den egine!");
			dekadikos_manos=(float)0.0;
			}
		}
	public float ektiposeDekadiko(){
		return dekadikos_manos;
		}
	public static void main(String args[]){
		ManosMetatropeas met=new ManosMetatropeas("123.456789",2);
		ManosMetatropeas met2=new ManosMetatropeas("Manos",2);
		Scanner scanner = new Scanner(System.in);
        System.out.print("Δώσε έναν δεκαδικό αριθμό: ");
        String userInput = scanner.nextLine();
        System.out.print("Δώσε πόσα δεκαδικά ψηφία να κρατηθούν: ");
        int psifia = scanner.nextInt();
        ManosMetatropeas met3 = new ManosMetatropeas(userInput, psifia);
        scanner.close();
		System.exit(0);
		}
	}
