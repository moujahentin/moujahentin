import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import javax.swing.event.*;
 
public class PinakasEna extends JFrame implements ActionListener
{
    protected JTable pinakas; 
    protected JTextField txf_lock;
    protected JScrollPane jsp;
    protected Container cnt;
	
    PinakasEna()
    {
        super("Pinakas Ena");
        
        cnt = getContentPane();
        cnt.setLayout(new BorderLayout());
        
        String onomataPediwn[] = {"Onoma","Epitheto","email"};
                    

        String dedomena[][] = 
        {
            { "Emmanouil-Christos", "Christianakis", "xristianakhs11@gmail.com"},
            { "Kostas", "Emmanouilidis", "emanouilidis@yahoo.com" },
            { "Mairi", "Antonopoulou", "antonopoulou@yahoo.com" }
        };

        pinakas = new JTable(dedomena, onomataPediwn);
        pinakas.setEnabled(false);
        jsp  = new JScrollPane(pinakas,JScrollPane.VERTICAL_SCROLLBAR_ALWAYS,JScrollPane.HORIZONTAL_SCROLLBAR_NEVER);
        cnt.add(jsp,BorderLayout.CENTER);
        setSize(500, 200);
        setVisible(true);
    }


    
    public void actionPerformed(ActionEvent evt)
    {
	}
    
    public static void main(String[] args)
    {
		PinakasEna pinakasEna = new PinakasEna();
		pinakasEna.addWindowListener(new WindowAdapter()
		{
			public void windowClosing(WindowEvent wvt)
			{
				System.exit(0);
			}
		});
    }
}
