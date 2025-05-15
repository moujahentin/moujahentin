import java.io.*;
public class ManosDimitris{
	protected ProcessBuilder ektelestis;
	protected String leitourgiko;
	public ManosDimitris(){}
	public void sviseOthoni(){
		try{
			leitourgiko = System.getProperty("os.name");
			if(leitourgiko.contains("Windows")){
				ektelestis = new ProcessBuilder("cmd","/c","cls");
				ektelestis.inheritIO().start().waitFor();
				}
			else{
				ektelestis = new ProcessBuilder("clear");
				ektelestis.inheritIO().start().waitFor();
				}
			}
		catch(Exception DIERGASIA_APETIXE){}
		}
	private void pressEnterToContinue(){ 
        System.out.println("Press Enter to continue...");
        try{
			System.in.read();
        }  
        catch(Exception e){}  
		}
	public static void main(String args[]){
		ManosDimitris manosOthoni = new ManosDimitris();
		manosOthoni.pressEnterToContinue();
		for(int metritis = 0; metritis<=10001; metritis++){
			System.out.print("\r"+metritis);
			try {
                Thread.sleep(1);
            } 
            catch (InterruptedException e) {
                Thread.currentThread().interrupt();
            }
		}
		manosOthoni.sviseOthoni();
		System.out.println("Bye bye :) ");
		System.exit(0);
		}
	}
