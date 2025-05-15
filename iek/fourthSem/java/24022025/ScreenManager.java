import java.io.*;

public class ScreenManager
{
	protected String entoli_linux;
	protected String leitourgiko;
	protected Process diergasia;
	protected ProcessBuilder ektelestis;
	
	public ScreenManager()
	{
	}
	public void sviseOthoni()
	{
	 try
		{
		leitourgiko= System.getProperty("os.name");
		if(leitourgiko.contains("Windows"))
		{
			 new ProcessBuilder("cmd", "/c", "cls").inheritIO().start().waitFor();
		}
		else
		{
			entoli_linux = "clear";
			ektelestis=new ProcessBuilder(entoli_linux);
			ektelestis.inheritIO();
			diergasia=ektelestis.start();
			diergasia.waitFor();	
		}
	  }catch(Exception DEN_ESVISE)
	  {
			System.out.println("Den  Esvise ->"+DEN_ESVISE.getMessage());
	  }
	  }
	
	public static void main(String args[])
	{
		ScreenManager paeiIOthoni= new ScreenManager();
		for(int metritis=0; metritis<=1000001;metritis++)
		{
			System.out.print("\r"+metritis);
			
			}
		paeiIOthoni.sviseOthoni();
		System.out.println("Ektelestike");
		System.exit(0);
		}
	}
