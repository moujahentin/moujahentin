import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import javax.swing.table.DefaultTableModel;
import javax.swing.event.*;
import java.util.ArrayList;
 
public class PinakasDio extends JFrame implements ActionListener
{
    protected JTable pinakas; 
    protected JTextField txf_lock;
    protected JScrollPane jsp;
    protected Container cnt;
	protected ArrayList<Atomo> i_vasi_mou;
	protected DefaultTableModel sxedio_pinaka;
	
    PinakasDio()
    {
        super("Pinakas Dio");
        
        cnt = getContentPane();
        cnt.setLayout(new BorderLayout());
        
        String onomataPediwn[] = {"Onoma","Epitheto","email"};
                    
        pinakas = new JTable(new Object[][]{}, onomataPediwn);
        pinakas.setModel(new DefaultTableModel(new Object[][]{}, onomataPediwn));
        pinakas.setEnabled(false);
        enimerosePinaka();
        jsp  = new JScrollPane(pinakas,JScrollPane.VERTICAL_SCROLLBAR_ALWAYS,JScrollPane.HORIZONTAL_SCROLLBAR_NEVER);
        cnt.add(jsp,BorderLayout.CENTER);
        setSize(500, 200);
        setVisible(true);
    }

	public void fortoseAtoma()
	{
		i_vasi_mou = new ArrayList<Atomo>();
		Atomo a1 = new Atomo("Emmanouil-Christos", "Christianakis", "xristianakhs11@gmail.com");
		Atomo a2 = new Atomo("Kostas", "Emmanouilidis", "emanouilidis@yahoo.com");
		Atomo a3 = new Atomo("Mairi", "Antonopoulou", "antonopoulou@yahoo.com");
		i_vasi_mou.add(a1);
		i_vasi_mou.add(a2);
		i_vasi_mou.add(a3);
	}

	public void enimerosePinaka()
	{
		sxedio_pinaka = (DefaultTableModel)pinakas.getModel();
		fortoseAtoma();
		Object pedio_grammis[] = new Object[3];
		for(int i = 0; i < i_vasi_mou.size(); i++)
        {
            pedio_grammis[0] = i_vasi_mou.get(i).onoma;
            pedio_grammis[1] = i_vasi_mou.get(i).epitheto;
            pedio_grammis[2] = i_vasi_mou.get(i).email;
            sxedio_pinaka.addRow(pedio_grammis);
        }
	}
	
   
    public void actionPerformed(ActionEvent evt)
    {
	}
    
    public static void main(String[] args)
    {
		PinakasDio pinakasDio = new PinakasDio();
		pinakasDio.addWindowListener(new WindowAdapter()
		{
			public void windowClosing(WindowEvent wvt)
			{
				System.exit(0);
			}
		});
    }
}
