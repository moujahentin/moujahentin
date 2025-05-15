import java.io.*;

public class Arithmologio
{
	protected Console i_konsola_mou;
	protected ScreenManager i_othoni_mou;
	protected Metatropeas metatropeas;
	protected String entoli;
	protected char epilogi;
	protected float arithmos_a,arithmos_b,apotelesma;
	
	public Arithmologio()
	{
		try
		{
			arithmos_a=(float) 0.0;
			arithmos_b=(float) 0.0;
			metatropeas=new Metatropeas();
			i_othoni_mou=new ScreenManager();
			i_konsola_mou=System.console;
			
			for(;;)
			{
				if(epilogi=='1')
				{
					i_othoni_mou.sviseOthoni();
					System.out.println("Dose ton proto arithmo");
					metatropeas.setDekadikos(i_konsola_mou.readLine(),2);
					arithmos_a=metatropeas.getDekadikos();
					System.out.println("Dose ton deftero arithmo");
					metatropeas.setDekadikos(i_konsola_mou.readLine(),2);
					arithmos_b=metatropeas.getDekadikos();
					patisteEnter();
					ektiposeMenu();
					}
				else if(epilogi=='2')
				{
					i_othoni_mou.sviseOthoni();
					apotelesma=arithmos_a+arithmos_b;
					System.out.println(arithmos_a+" + "+arithmos_b+" = "+apotelesma);
					patisteEnter();
					ektiposeMenu();
					}
				else if(epilogi=='3')
				{
					i_othoni_mou.sviseOthoni();
					apotelesma=arithmos_a-arithmos_b;
					System.out.println(arithmos_a+" - "+arithmos_b+" = "+apotelesma);
					patisteEnter();
					ektiposeMenu();
					}
				else if(epilogi=='4')
				{
					i_othoni_mou.sviseOthoni();
					apotelesma=arithmos_a*arithmos_b;
					System.out.println(arithmos_a+" * "+arithmos_b+" = "+apotelesma);
					patisteEnter();
					ektiposeMenu();
					}
				else if(epilogi=='5')
				{
					i_othoni_mou.sviseOthoni();
					apotelesma=arithmos_a/arithmos_b;
					System.out.println(arithmos_a+" / "+arithmos_b+" = "+apotelesma);
					patisteEnter();
					ektiposeMenu();
					}
				else if(epilogi=='6')
				{
					i_othoni_mou.sviseOthoni();
					System.out.println("S.A.E.K. Koufalion");
					patisteEnter();
					ektiposeMenu();
					}
				else if(epilogi=='7')
				{
					i_othoni_mou.sviseOthoni();
					System.out.println("Bye bye");
					break;
					}
				else
				{
					ektiposeMenu();
					}
				}
			}
		catch(Exception I_KONSOLA_APETYXE)
		{
			}
		}
	
	}
