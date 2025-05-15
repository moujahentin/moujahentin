import java.io.*;

public class Metatropeas
{
	protected float dekadikos;
	protected int akeraios;
	public Metatropeas()
	{
		dekadikos = (float) 0.0;
		akeraios = 0;
		}
	public void setAkeraios(String buffer)
	{
		try
		{
			akeraios= Integer.valueOf(buffer).intValue();
			} 
		catch(Exception I_METATROPI_APETYXE)
		{
			System.out.println("I metatropi apetyxe!");
			akeraios=0;
			}
		}
	public void setDekadikos(String buffer)
	{
		try
		{
			dekadikos= Float.valueOf(buffer).floatValue();
			} 
		catch(Exception I_METATROPI_APETYXE)
		{
			System.out.println("I metatropi apetyxe!");
			dekadikos= (float)0.0;
			}
		}
	public void setDekadikos(String buffer,int psifia)
	{
		if(buffer.contains("."))
		{
			int teleia=buffer.indexOf(".");
			buffer = buffer.substring(0,teleia+psifia+1);
			}
		setDekadikos(buffer);
		}
	public int getAkeraios()
	{
		return akeraios;
		}
	public float getDekadikos()
	{
		return dekadikos;
		}
	public static void main(String args[])
	{
		Metatropeas metro =new Metatropeas();
		metro.setDekadikos("12.123456");
		metro.setDekadikos("12.123456",2);
		System.out.println("Dekadikos -> "+metro.getDekadikos());
		
		metro.setAkeraios("123456");
		System.out.println("Akeraios -> "+metro.getAkeraios());
		
		System.exit(0);
		}
	}
