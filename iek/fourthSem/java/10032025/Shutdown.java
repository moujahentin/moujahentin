import java.io.*;
public class Shutdown{
	protected String katalogosErgasias;
	public native void termatismos();
	public Shutdown(){
		try{
			katalogosErgasias=System.getProperty("user.dir");
			System.load(katalogosErgasias+"/libShutdown.so");
			}
		catch(Exception DEN_LEITOURGISE){}
	
		}
		
	public static void main(String args[])
	{
			Shutdown st = new Shutdown();
			st.termatismos();
			System.exit(0);
	}	
	}
