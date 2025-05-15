import java.io.*;

public class ScreenMenu
{
	protected ScreenManager screenManager;
	protected Console i_konsola_mou;
	protected char epilogi;
	protected String entoli;
	
	public ScreenMenu()
	{
		try
		{
			screenManager=new ScreenManager();
			i_konsola_mou =System.console();
			for(;;)
			{
				if(epilogi=='1')
				{
					screenManager.sviseOthoni();
					System.out.println("Entoli A'");
					patisteEnter();
					ektiposeMenu();
					}
				
				else if(epilogi=='2')
				{
					screenManager.sviseOthoni();
					System.out.println("Entoli B'");
					patisteEnter();
					ektiposeMenu();
					}
				
				else if(epilogi=='3')
				{
					screenManager.sviseOthoni();
					System.out.println("Entoli C'");
					patisteEnter();
					ektiposeMenu();
					}
				
				else if(epilogi=='4')
				{
					screenManager.sviseOthoni();
					System.out.println("Bye bye :)");
					break;
					}
				else{
					ektiposeMenu();
					}
				}
				
				
			
			}
		catch(Exception KONSOLA_APETYXE)
		{
			
			}
		
		}
		
	public void patisteEnter()
	{
		System.out.println("Patiste Enter");
		String enter = i_konsola_mou.readLine();
	}
	
	public void ektiposeMenu()
	{
		screenManager.sviseOthoni();
		System.out.println("1) Entoli A'");
		System.out.println("2) Entoli B'");
		System.out.println("3) Entoli C'");
		System.out.println("4) Exodos");
		entoli=i_konsola_mou.readLine();
		if((entoli.length()>0)&&(entoli.length()<2))
		{
			epilogi=entoli.charAt(0);
			}
		}
	public static void main(String args[])
	{
		ScreenMenu i_efarmogi_mou=new ScreenMenu();
		System.exit(0);
		
		}
	}
