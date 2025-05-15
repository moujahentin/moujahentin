public class Onoma{
	protected String to_onoma_mou;
	public Onoma(){
		doseOnoma("");
		}
	public Onoma(String bfr_tmp){
		doseOnoma(bfr_tmp);
	}
	public void doseOnoma(String buffer_onoma){
		to_onoma_mou=buffer_onoma;
		}
	 public String pareOnoma(){ 
		 return to_onoma_mou;
		 }
	public static void main(String args[]){
		Onoma onoma=new Onoma("Kitsos Mpampouras");
		onoma.doseOnoma("Manos Dimitris");
		System.out.println("To onoma sou einai : "+onoma.pareOnoma());
		System.exit(0);
		}
}
