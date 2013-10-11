import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
public class Help extends JFrame implements ActionListener{
   JButton back = new JButton();
   JButton beginPlay = new JButton();
   JLabel help = new JLabel( );
   public  Help(){
          Container cont = getContentPane();
    
          cont.setLayout(null);  

            beginPlay = new JButton("Start");
            beginPlay.setFont(new Font("Goudy Stout",Font.CENTER_BASELINE,10));
            beginPlay.setForeground(new Color(255,255,255));
            beginPlay.setBounds(150, 555, 150,100);
            beginPlay.setBackground(new Color(0,0,0));
            beginPlay.setBorderPainted(false);
            beginPlay.addActionListener(this);
            cont.add(beginPlay);

            back = new JButton("BACK");
            back.setFont(new Font("Goudy Stout",Font.CENTER_BASELINE,10));
            back.setForeground(new Color(255,255,255));
            back.setBounds(450, 555, 150,100);
            back.setBackground(new Color(0,0,0));
            back.setBorderPainted(false);
            back.addActionListener(this);
            cont.add(back);  
      
          help = new JLabel(new ImageIcon(getClass().getResource("res/help.jpg")));
          help.setBounds(0, 0,785, 743);
          cont.add(help);
	  this.show();
	  this.setBounds(200,10,785,743);
          this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
          this.setResizable(false);
          this.addWindowListener(new java.awt.event.WindowAdapter() {
             public void windowClosing(java.awt.event.WindowEvent e) {
                  System.exit(0);
          }
     });
	this.setVisible(true);
} 

   public void actionPerformed(ActionEvent e){
      if(e.getSource()== back){
        this.setVisible(false);
        new Welcome();
      }
      if(e.getSource() == beginPlay){
        this.setVisible(false);
        new GameInterface();
        new Compute(2);
      }
   }  
}