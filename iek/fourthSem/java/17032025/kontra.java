import java.time.Instant;
import java.time.Duration;

import java.io.*;

public class kontra
{
	protected Console i_kosnola_mou;
	
	public kontra()
	{
		i_kosnola_mou = System.console();
		System.out.println("Patiste Enter");
		String enter= i_kosnola_mou.readLine();
		System.out.println("Analogiko");
		midenXilia();
		midenDioTetrakosia();
		midenTriaDiakosia();
		System.out.println("Aytomato");
		pameKontra(0,1000);
		pameKontra(0,2400);
		pameKontra(0,3200);
		System.exit(0);
	}
	public void pameKontra(int apo, int mexri)
	{
		Instant tora=Instant.now();
		for(int metritis=apo;metritis<mexri+1;metritis++)
		{
			System.out.print("\r"+metritis);
		}
		Instant terma=Instant.now();
		long sinolo=Duration.between(tora,terma).toMillis();
		System.out.println("\n"+apo+" - "+mexri+" se "+sinolo+" ms");
	}
	public void midenXilia()
	{
		Instant tora=Instant.now();
		for(int metritis=0;metritis<1001;metritis++)
		{
			System.out.print("\r"+metritis);
		}
		Instant terma=Instant.now();
		long sinolo=Duration.between(tora,terma).toMillis();
		System.out.println("\n 0 -1000 se "+sinolo+ "  ms");	
	}
	public void midenDioTetrakosia()
	{
		Instant tora=Instant.now();
		for(int metritis=0;metritis<2401;metritis++)
		{
			System.out.print("\r"+metritis);
		}
		Instant terma=Instant.now();
		long sinolo=Duration.between(tora,terma).toMillis();
		System.out.println("\n 0 -2400 se "+sinolo+ "  ms");	
	}
	public void midenTriaDiakosia()
	{
		Instant tora=Instant.now();
		for(int metritis=0;metritis<3201;metritis++)
		{
			System.out.print("\r"+metritis);
		}
		Instant terma=Instant.now();
		long sinolo=Duration.between(tora,terma).toMillis();
		System.out.println("\n 0 -3200 se "+sinolo+ "  ms");	
	}
		public static void main(String args[])
	{
		kontra kont=new kontra();
	}
	}
