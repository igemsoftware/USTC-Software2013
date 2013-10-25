import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
import java.io.BufferedReader;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;
import java.util.logging.Level;
import java.util.logging.Logger;
public class Welcome extends JFrame implements ActionListener{
   JButton BeginPlay = new JButton();
   JButton HighScore = new JButton();
   JButton Help = new JButton();
   JButton Exit = new JButton();
   JLabel GroundPicture = new JLabel( );
   public  Welcome(){
          Container cont = getContentPane();
          
          cont.setLayout(null);  
          
            BeginPlay = new JButton("Start");
            BeginPlay.setFont(new Font("Goudy Stout",Font.BOLD,24));
            BeginPlay.setForeground(new Color(4,124,205));
            BeginPlay.setBounds(0, 0, 200,200);
            BeginPlay.setBackground(new Color(84,250,140));
            BeginPlay.addActionListener(this);
       
            cont.add(BeginPlay);
      
            HighScore = new JButton("<html>High <br> Score</html>");
            HighScore.setFont(new Font("Goudy Stout",Font.BOLD,24));
            HighScore.setForeground(new Color(4,154,15));
            HighScore.setBounds(200, 0, 200,200);
            HighScore.setBackground(new Color(142,225,255));
            HighScore.addActionListener(this);
          
            cont.add(HighScore);  

             Help = new JButton("Help");
             Help.setFont(new Font("Goudy Stout",Font.BOLD,24));
             Help.setForeground(new Color(4,154,155));
             Help.setBounds(0, 200, 200,200);
             Help.setBackground(new Color(231,249,67));
             Help.addActionListener(this);
  
             cont.add(Help);
 
             Exit = new JButton("Exit");
             Exit.setFont(new Font("Goudy Stout",Font.BOLD,24));
             Exit.setForeground(new Color(114,14,15));
             Exit.setBackground(new Color(177,133,254));
             Exit.setBounds(200,200,200,200);
             Exit.addActionListener(this);
             cont.add(Exit);
	this.show();
	this.setBounds(400,200,400,430);
     
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
      if(e.getSource()== BeginPlay){
        this.setVisible(false);
        new GameInterface();
        new Compute(2);
      }
      if(e.getSource() == HighScore){
         File file = new File("highscore.txt");
         FileReader fr = null;
          try {
              fr = new FileReader(file);
          } catch (FileNotFoundException ex) {
              Logger.getLogger(Welcome.class.getName()).log(Level.SEVERE, null, ex);
          }
        BufferedReader buffer = new BufferedReader(fr);
        String s = null;
          try {
               s = buffer.readLine();
          } catch (IOException ex) {
              Logger.getLogger(Welcome.class.getName()).log(Level.SEVERE, null, ex);
          }
          JOptionPane.showMessageDialog(null,"The highest score is "+s);
      }
      if(e.getSource() == Help){
       this.setVisible(false);
       new Help();
      }
      if(e.getSource() == Exit){
       System.exit(0);
      }
     }

   public static void main(String[] args) {
		
            new Welcome();
	}
}