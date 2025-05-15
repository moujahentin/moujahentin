import java.io.*;

public class Atomo implements Serializable
{
	protected String onoma;
	protected String epitheto;
	protected String email;
		
	public Atomo(String bfOnoma,String bfEpitheto,String bfEmail)
	{
		setOnoma(bfOnoma);
		setEpitheto(bfEpitheto);
		setEmail(bfEmail);
	}
	
	public void setOnoma(String bfOnoma)
	{
		onoma = bfOnoma;
	}
	
	public String getOnoma()
	{
		return onoma;
	}
	
	public void setEpitheto(String bfEpitheto)
	{
		epitheto = bfEpitheto;
	}
	
	public String getEpitheto()
	{
		return epitheto;
	}
	
	public void setEmail(String bfEmail)
	{
		email = bfEmail;
	}
	
	public String getEmail()
	{
		return email;
	}
}
