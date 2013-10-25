import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
import java.awt.geom.Line2D;
import java.awt.geom.Point2D;
import java.io.BufferedReader;
import java.net.URL;
import java.util.ArrayList;
import java.util.Date;
import java.util.logging.Level;
import java.util.logging.Logger;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.FileReader;
import java.io.IOException;
import java.io.PrintWriter;
public class GameInterface extends JFrame implements MouseListener , ActionListener{
    URL url[] = new URL[11];
    URL urlb[] = new URL[10];
    URL urls[] = new URL[10];
    URL url0 ;
    Image img0,img1,img2,img3,img4,img5,img6,img7,img8,img9;
    Image imgb0,imgb1,imgb2,imgb3,imgb4,imgb5,imgb6,imgb7,imgb8,imgb9;
    Image imgs0,imgs1,imgs2,imgs3,imgs4,imgs5,imgs6,imgs7,imgs8,imgs9;
    Image imgCan;
    static int initial=2;
    Compute compute =new Compute(initial);
    ArrowLinePanel arrow = new ArrowLinePanel();
    int[] answer = new int[3];
    int gamedifficulty=compute.num;
     JLabel GroundPicture = new JLabel( );
     JLabel scores = new JLabel();
     JLabel scoreNumber = new JLabel();
     JLabel logo =new JLabel();
     ArrayList geneNum = new ArrayList();
     ArrayList genepicture = new ArrayList();
     ArrayList genequantity = new ArrayList();
     ArrayList newGenequantity = new ArrayList();
     ArrayList genecount = new ArrayList();
     ArrayList controlMatrix = new ArrayList();
     ArrayList originalGeneMatrix = new ArrayList();
     ArrayList playerMakeMatrix = new ArrayList();
     ArrayList playerOriginalGene = new ArrayList();
     ArrayList playerNewGene = new ArrayList();
     ArrayList playerControlMatrix = new ArrayList();
     ArrayList line1 = new ArrayList();
     ArrayList line2 = new ArrayList();
     ArrayList line3 = new ArrayList();
     ArrayList line4 = new ArrayList();
     ArrayList img = new ArrayList();
     ArrayList imgb = new ArrayList();
     ArrayList imgs = new ArrayList();
     boolean allNoChick=true;
     JButton showAnswer = new JButton();
     JButton nextLevel = new JButton();
     JButton red = new JButton();
     JButton green =new JButton();
     JButton cancel = new JButton();
     JButton finish = new JButton();
     JButton exit = new JButton();
     Container cont = getContentPane();
     int startGene=-1,endGene=-1;
     int flag = 0;
     Date date = new Date();
     long beginTime,endTime,usingTime;
     ArrayList mark = new ArrayList();
     ArrayList lab = new ArrayList();
     int fin = 0;
    static int score=0;
    static int hpLong=490;
    Rectangle hp = new Rectangle(0,0,15,hpLong);
    BloodBar b = new BloodBar();
    int blueWhite=-1;
  public GameInterface(){
      beginTime = date.getTime();
      int i;
      int j;
      int k;
      try{
         url[0] = this.getClass().getResource("res/0.png");
         url[1] = this.getClass().getResource("res/1.png");
         url[2] = this.getClass().getResource("res/2.png");
         url[3] = this.getClass().getResource("res/3.png");
         url[4] = this.getClass().getResource("res/4.png");
         url[5] = this.getClass().getResource("res/5.png");
         url[6] = this.getClass().getResource("res/6.png");
         url[7] = this.getClass().getResource("res/7.png");
         url[8] = this.getClass().getResource("res/8.png");
         url[9] = this.getClass().getResource("res/9.png");
         url[10] = this.getClass().getResource("res/cancel.png");
         urlb[0] = this.getClass().getResource("res/b0.png");
         urlb[1] = this.getClass().getResource("res/b1.png");
         urlb[2] = this.getClass().getResource("res/b2.png");
         urlb[3] = this.getClass().getResource("res/b3.png");
         urlb[4] = this.getClass().getResource("res/b4.png");
         urlb[5] = this.getClass().getResource("res/b5.png");
         urlb[6] = this.getClass().getResource("res/b6.png");
         urlb[7] = this.getClass().getResource("res/b7.png");
         urlb[8] = this.getClass().getResource("res/b8.png");
         urlb[9] = this.getClass().getResource("res/b9.png");
         urls[0] = this.getClass().getResource("res/s0.png");
         urls[1] = this.getClass().getResource("res/s1.png");
         urls[2] = this.getClass().getResource("res/s2.png");
         urls[3] = this.getClass().getResource("res/s3.png");
         urls[4] = this.getClass().getResource("res/s4.png");
         urls[5] = this.getClass().getResource("res/s5.png");
         urls[6] = this.getClass().getResource("res/s6.png");
         urls[7] = this.getClass().getResource("res/s7.png");
         urls[8] = this.getClass().getResource("res/s8.png");
         url[9] = this.getClass().getResource("res/s9.png");
      }catch(Exception e){}
      img0= Toolkit.getDefaultToolkit().getImage(url[0]);
      img.add(img0);
      img1 = Toolkit.getDefaultToolkit().getImage(url[1]);
      img.add(img1);
      img2 = Toolkit.getDefaultToolkit().getImage(url[2]);
      img.add(img2);
      img3 = Toolkit.getDefaultToolkit().getImage(url[3]);
      img.add(img3);
      img4 = Toolkit.getDefaultToolkit().getImage(url[4]);
      img.add(img4);
      img5 = Toolkit.getDefaultToolkit().getImage(url[5]);
      img.add(img5);
      img6 = Toolkit.getDefaultToolkit().getImage(url[6]);
      img.add(img6);
      img7 = Toolkit.getDefaultToolkit().getImage(url[7]);
      img.add(img7);
      img8 = Toolkit.getDefaultToolkit().getImage(url[8]);
      img.add(img8);
      img9 = Toolkit.getDefaultToolkit().getImage(url[9]);
      img.add(img9);
      imgCan =Toolkit.getDefaultToolkit().getImage(url[10]);
      imgb0= Toolkit.getDefaultToolkit().getImage(urlb[0]);
      imgb.add(imgb0);
      imgb1 = Toolkit.getDefaultToolkit().getImage(urlb[1]);
      imgb.add(imgb1);
      imgb2 = Toolkit.getDefaultToolkit().getImage(urlb[2]);
      imgb.add(imgb2);
      imgb3 = Toolkit.getDefaultToolkit().getImage(urlb[3]);
      imgb.add(imgb3);
      imgb4 = Toolkit.getDefaultToolkit().getImage(urlb[4]);
      imgb.add(imgb4);
      imgb5 = Toolkit.getDefaultToolkit().getImage(urlb[5]);
      imgb.add(imgb5);
      imgb6 = Toolkit.getDefaultToolkit().getImage(urlb[6]);
      imgb.add(imgb6);
      imgb7 = Toolkit.getDefaultToolkit().getImage(urlb[7]);
      imgb.add(imgb7);
      imgb8 = Toolkit.getDefaultToolkit().getImage(urlb[8]);
      imgb.add(imgb8);
      imgb9 = Toolkit.getDefaultToolkit().getImage(urlb[9]);
      imgb.add(imgb9);
      imgs0= Toolkit.getDefaultToolkit().getImage(urls[0]);
      imgs.add(imgs0);
      imgs1 = Toolkit.getDefaultToolkit().getImage(urls[1]);
      imgs.add(imgs1);
      imgs2 = Toolkit.getDefaultToolkit().getImage(urls[2]);
      imgs.add(imgs2);
      imgs3 = Toolkit.getDefaultToolkit().getImage(urls[3]);
      imgs.add(imgs3);
      imgs4 = Toolkit.getDefaultToolkit().getImage(urls[4]);
      imgs.add(imgs4);
      imgs5 = Toolkit.getDefaultToolkit().getImage(urls[5]);
      imgs.add(imgs5);
      imgs6 = Toolkit.getDefaultToolkit().getImage(urls[6]);
      imgs.add(imgs6);
      imgs7 = Toolkit.getDefaultToolkit().getImage(urls[7]);
      imgs.add(imgs7);
      imgs8 = Toolkit.getDefaultToolkit().getImage(urls[8]);
      imgs.add(imgs8);
      imgs9 = Toolkit.getDefaultToolkit().getImage(urls[9]);
      imgs.add(imgs9);
      if(initial == 10){
        JOptionPane.showMessageDialog(null,"congratulations");
      }
      compute.InitializeGene();
      compute.ProduceMatrix();
      compute.Equation();

      for(i=0;i<gamedifficulty;i++){
          for(j=0;j<gamedifficulty;j++){
           playerMakeMatrix.add(0);
          }
      }
      for(i=0;i<gamedifficulty;i++){
       for(j=0;j<gamedifficulty;j++){
        originalGeneMatrix.add(compute.originalMatrix.get(i*gamedifficulty+j));
       }
      }
      for(i=0;i<compute.num;i++){
        genequantity.add(compute.originalGene.get(i));
      }
      for(i=0;i<compute.num;i++){
        compute.RemoveOneGene(i);
        compute.NewEquation();
    
       
        System.out.println("\n");
        k=0;
        for(j=0;j<compute.num;j++){
         if(j==i){
          newGenequantity.add(-1.0);
         }else{
          newGenequantity.add(compute.newGene.get(k));
          k++;
         }
        }
        for(j=0;j<compute.num;j++){
         Double n = (Double)(newGenequantity.get(j));
         double ne = n.doubleValue();  
         Double o = (Double)genequantity.get(j);
         double ol = o.doubleValue();
         if(ne==-1.0){
          controlMatrix.add(0);
         }else if(ne-ol>0.001){
           controlMatrix.add(1);
         }else if(ne-ol<-0.001){
           controlMatrix.add(-1);
         }else{
           controlMatrix.add(0);
         }  
        }
        newGenequantity.clear();
      }
     addMouseListener(this);
     
      cont.setLayout(null); 
     
      setGene();
      
      setLabel();
      
      for(i=0;i<genepicture.size();i++){
        genecount.add(0);
      }
  
      red =new JButton("repress");
      red.setFont(new Font("Showcard Gothic",Font.BOLD,14));
      red.setForeground(new Color(16,30,155));
      red.setBackground(new Color(251,101,100));
      red.setBounds(0, 470, 180, 180);
      red.addActionListener(this);
      cont.add(red);
     
      green = new JButton("enhance");
      green.setFont(new Font("Showcard Gothic",Font.BOLD,14));
      green.setForeground(new Color(16,130,255));
      green.setBackground(new Color(84,250,140));
      green.setBounds(180, 470, 180,180);
      green.addActionListener(this);
      cont.add(green);
    
      cancel = new JButton("cancel");
      cancel.setFont(new Font("Showcard Gothic",Font.BOLD,24));
      cancel.setForeground(new Color(16,130,255));
      cancel.setBackground(new Color(253,195,69));
      cancel.setBounds(360,470,180,180);
      cancel.addActionListener(this);
      cont.add(cancel);
    
      finish = new JButton("finish");
      finish.setFont(new Font("Showcard Gothic",Font.BOLD,24));
      finish.setForeground(new Color(117,43,72));
      finish.setBackground(new Color(238,112,183));
      finish.setBounds(540,470,180,180);
      finish.addActionListener(this);
      cont.add(finish);
  
      showAnswer = new JButton("answer");
      showAnswer.setFont(new Font("Showcard Gothic",Font.BOLD,24));
      showAnswer.setForeground(new Color(1,12,215));
      showAnswer.setBackground(new Color(254,243,40));
      showAnswer.setBounds(540, 320, 180,150);
      showAnswer.addActionListener(this);
      showAnswer.setEnabled(false);
      cont.add(showAnswer);
      
       nextLevel = new JButton("next level");
       nextLevel.setFont(new Font("Showcard Gothic",Font.BOLD,24));
       nextLevel.setForeground(new Color(112,43,1));
       nextLevel.setBackground(new Color(143,212,254));
       nextLevel.setBounds(540, 170, 180,150);
       nextLevel.addActionListener(this);
       nextLevel.setEnabled(false);
       cont.add(nextLevel);
      
       exit = new JButton("Back");
       exit.setFont(new Font("Showcard Gothic",Font.BOLD,24));
       exit.setForeground(new Color(4,128,172));
       exit.setBackground(new Color(251,127,63));
       exit.setBounds(540,0,180,169);
       exit.addActionListener(this);
       cont.add(exit);

       scores = new JLabel("score:");
       scores.setFont(new Font("",Font.BOLD,24));
       scores.setBounds(400,30,100,100);
       cont.add(scores);

       scoreNumber = new JLabel(""+score);
       scoreNumber.setFont(new Font("",Font.PLAIN,24));
       scoreNumber.setBounds(480,30,100,100);
       cont.add(scoreNumber);

       logo = new JLabel(new ImageIcon(getClass().getResource("res/logo.png")));
       logo.setBounds(15, 0, 200, 109);
       cont.add(logo);

        this.show();
	this.setBounds(300,50,720,650);
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setResizable(false);
        this.addWindowListener(new java.awt.event.WindowAdapter() {
            public void windowClosing(java.awt.event.WindowEvent e) {
               System.exit(0);
          }
     });
	this.setVisible(true);
        b.start();
  }

  public void setLabel(){
    geneNum.clear();
    int i;
    for(i=0;i<gamedifficulty;i++){
      geneNum.add(new JLabel(""+(i+1)));
    }
    double angle=2*3.1415926/gamedifficulty;
    for(i=0;i<gamedifficulty;i++){
        JLabel temp = (JLabel)geneNum.get(i);
         temp.setBounds((int)(266+150*Math.sin(angle*i)),(int)(250-150*Math.cos(angle*i)+30), 10, 10);
         cont.add(temp);
      }
  }

  public void setGene(){
    int i;
    double angle=2*3.1415926/gamedifficulty;
    for(i=0;i<gamedifficulty;i++){
       genepicture.add(new Rectangle((int)(266+150*Math.sin(angle*i)),(int)(250-150*Math.cos(angle*i)),50,50));
      }
  }

    @Override
  public void update(Graphics g){ paint(g); }

   @Override
  public void paint( Graphics g ){
    int i;
    super.paint(g);
    g.setColor(Color.CYAN);

    for(i=0;i<genepicture.size();i++){
      Rectangle temp =(Rectangle)genepicture.get(i);
      if(temp.height==50){
      Image tempimg = (Image)img.get(i);
      g.drawImage(tempimg,temp.x, temp.y, this) ;
      }
      if(temp.height==70){
      Image tempimg = (Image)imgb.get(i);
      g.drawImage(tempimg,temp.x, temp.y, this) ;
      }
      if(temp.height == 30){
      Image tempimg = (Image)imgs.get(i);
      g.drawImage(tempimg,temp.x, temp.y, this) ;
      }
    }

    if(blueWhite!=-1){
     Rectangle temp = (Rectangle)genepicture.get(blueWhite);
     g.drawImage(imgCan,temp.x,temp.y,this);
    }
     g.setColor(Color.green);
     for(i=0;i<line3.size();i++){
     Line2D.Double temp = (Line2D.Double)line3.get(i);
     int x1 = Integer.parseInt(""+Math.round(temp.getX1()));
     int y1 = Integer.parseInt(""+Math.round(temp.getY1()));
     int x2 = Integer.parseInt(""+Math.round(temp.getX2()));
     int y2 = Integer.parseInt(""+Math.round(temp.getY2()));
     arrow.paint(x1, y1, x2, y2, g);
     }
     g.setColor(Color.red);
     for(i=0;i<line4.size();i++){
     Line2D.Double temp = (Line2D.Double)line4.get(i);
     int x1 = Integer.parseInt(""+Math.round(temp.getX1()));
     int y1 = Integer.parseInt(""+Math.round(temp.getY1()));
     int x2 = Integer.parseInt(""+Math.round(temp.getX2()));
     int y2 = Integer.parseInt(""+Math.round(temp.getY2()));
     arrow.paint(x1, y1, x2, y2, g);
     }
  
    g.setColor(Color.red);
    for(i=0;i<line1.size();i++){
     Line2D.Double temp = (Line2D.Double)line1.get(i);
     int x1 = Integer.parseInt(""+Math.round(temp.getX1()));
     int y1 = Integer.parseInt(""+Math.round(temp.getY1()));
     int x2 = Integer.parseInt(""+Math.round(temp.getX2()));
     int y2 = Integer.parseInt(""+Math.round(temp.getY2()));
     arrow.paint(x2, y2, x1, y1, g);
    }
    g.setColor(Color.GREEN);
    for(i=0;i<line2.size();i++){
     Line2D.Double temp = (Line2D.Double)line2.get(i);
     int x1 = Integer.parseInt(""+Math.round(temp.getX1()));
     int y1 = Integer.parseInt(""+Math.round(temp.getY1()));
     int x2 = Integer.parseInt(""+Math.round(temp.getX2()));
     int y2 = Integer.parseInt(""+Math.round(temp.getY2()));
     arrow.paint(x2, y2, x1, y1, g);
    }
    g.setColor(new Color(250,90,67));
    g.fillRect(hp.x, hp.y, hp.width, hp.height);
  }

 public void draw(int i){

  int j;
  for(j=0;j<compute.num;j++){
   Integer tempint = (Integer)controlMatrix.get(i*compute.num+j);
   if(j==i){
    Rectangle temp = (Rectangle)genepicture.get(j);
    genepicture.set(j,new Rectangle(temp.x,temp.y,50,50));
   }
   else if(tempint == 1){
    Rectangle temp = (Rectangle)genepicture.get(j);
    genepicture.set(j, new Rectangle(temp.x,temp.y,70,70));
    
   }
   else if(tempint == -1){
      Rectangle temp = (Rectangle)genepicture.get(j);
    genepicture.set(j, new Rectangle(temp.x,temp.y,30,30));
   }
  }
 }

 public void restore(){
  int i;
  for(i=0;i<compute.num;i++){
   Rectangle temp = (Rectangle)genepicture.get(i);
   genepicture.set(i, new Rectangle(temp.x,temp.y,50,50));
  }
 }
 //
 public void judgeAll(){
  int i;
  allNoChick = true;
  for(i=0;i<compute.num;i++){
    Integer temp = (Integer)genecount.get(i);
    int t =temp.intValue();
    if(t==1){
      allNoChick = false;
    }
  }
 }

 public void drawArrow(int i,int j,int t){
  Point2D.Double holder,end;
  Rectangle temp1 = (Rectangle)genepicture.get(i);
  Rectangle temp2 = (Rectangle)genepicture.get(j);
  int x1,y1,x2,y2;
  x1 = temp1.x+(temp1.width/2);
  y1 = temp1.y+(temp1.height/2);
  x2 = temp2.x+(temp2.width/2);
  y2 = temp2.y+(temp2.height/2);
  holder = new Point2D.Double(x1,y1);
  end = new Point2D.Double(x2,y2);
  if(t==-1){
   line1.add(new Line2D.Double(holder,end));
   repaint();
  }
  if(t==1){
   line2.add(new Line2D.Double(holder,end));
   repaint();
  }
 }


 public void showAnswer(){
  line3.clear();
  line4.clear();
  int i,j,t;
  Integer temp;
  for(i=0;i<compute.num;i++){
   for(j=0;j<compute.num;j++){
   temp = (Integer) originalGeneMatrix.get((i*compute.num+j));
    t = temp.intValue();
    drawArrow(i,j,t);
   }
  }
}

 public void beginGame(){
   int i,j,t;
   int m,n;
   int p,q;
   Integer temp;
   do{
   m=ChoiceNum();
   n=ChoiceNum();
   temp = (Integer)originalGeneMatrix.get(m*compute.num+n);
   p = temp.intValue();
   temp = (Integer)originalGeneMatrix.get(n*compute.num+m);
   q = temp.intValue();
   }while((m==n)||(p==0&&q==0));
  for(i=0;i<compute.num;i++){
   for(j=0;j<compute.num;j++){
   if((i!=n||j!=m)&&(i!=m||j!=n)){
   temp = (Integer) originalGeneMatrix.get((i*compute.num+j));
    t = temp.intValue();
    if(i!=j){
    drawArrow(i,j,t);
     }
    }
   }
  }
 }

 public void finish() throws FileNotFoundException, IOException{
  b.stop();
  endTime = date.getTime();
  usingTime = beginTime - endTime;
  int i,j;
  for(i=0;i<gamedifficulty;i++){
   for(j=0;j<gamedifficulty;j++){
    compute.originalMatrix.set(i*gamedifficulty+j, playerMakeMatrix.get(i*gamedifficulty+j));
   }
  }
   compute.InitializeGene();
   compute.Equation();

  for(i=0;i<gamedifficulty;i++){
    playerOriginalGene.add(compute.originalGene.get(i));
    System.out.println(playerOriginalGene.get(i));
  }
  for(i=0;i<compute.num;i++){
        compute.RemoveOneGene(i);
        compute.NewEquation();
        System.out.println("Remove"+i+"NewGene");
        compute.ShowNewGene();
        int k=0;
        for(j=0;j<compute.num;j++){
         if(j==i){
          playerNewGene.add(-1.0);
         }else{
          playerNewGene.add(compute.newGene.get(k));
          k++;
         }
        }
        for(j=0;j<compute.num;j++){
         Double n = (Double)(playerNewGene.get(j));
         double ne = n.doubleValue();  
         Double o = (Double)playerOriginalGene.get(j);
         double ol = o.doubleValue();
         if(ne==-1.0){
          playerControlMatrix.add(0);
         }else if(ne-ol>0.001){
           playerControlMatrix.add(1);
         }else if(ne-ol<-0.001){
           playerControlMatrix.add(-1);
         }else{
           playerControlMatrix.add(0);
         }  
        }
        playerNewGene.clear();
      }
  double m=0,n=0;
  for(i=0;i<gamedifficulty;i++){
    for(j=0;j<gamedifficulty;j++){
     if(playerControlMatrix.get(i*gamedifficulty+j)==controlMatrix.get(i*gamedifficulty+j)){
       score++;
       m++;
     }else{
       score--;
       n++;
     }
    }
  }
  if(hp.height>0){
    int t = hp.height+(int)((m/(m+n)-0.8)*300);
    if(t<200&&t>0){
     hpLong =t;
     hp.height = hpLong;
     repaint();
    }
    if(t>200){
     hpLong = t;
     hp.height = hpLong;
     repaint();
    }
    if(t<0){
     hpLong=0;
     hp.height = hpLong;
     repaint();
    }
    
  }
  if(hp.height<=0){
   GameInterface.this.setVisible(false);
   initial = 2;
   hpLong = 490;
   b.stop();
   if(CheckScore()==1){
      JOptionPane.showMessageDialog(null,"Hige score！");
      try {
          SaveScore();
      } catch (IOException ex) {
          Logger.getLogger(GameInterface.class.getName()).log(Level.SEVERE, null, ex);
      }
   }
   score = 0;
   JOptionPane.showMessageDialog(null, "Game over！");
   new Welcome();  
  }
 }
  @Override
    public void mouseClicked(MouseEvent e) {
        int i;
        for(i=0;i<genepicture.size();i++){
          Integer t =(Integer)genecount.get(i);
          int n = t.intValue();
          Rectangle temp = (Rectangle)genepicture.get(i);
          if(e.getX()>temp.x&&e.getX()<(temp.x+temp.width)&&e.getY()>temp.y&&e.getY()<(temp.y+temp.height)&&e.getModifiers()==MouseEvent.BUTTON3_MASK&&n==0){
           judgeAll();
           if(allNoChick){
            draw(i);
            blueWhite = i;
            genecount.set(i,1);
            repaint();
           }
          }else if(e.getX()>temp.x&&e.getX()<(temp.x+temp.width)&&e.getY()>temp.y&&e.getY()<(temp.y+temp.height)&&e.getModifiers()==MouseEvent.BUTTON3_MASK&&n==1){
            restore();
            blueWhite = -1;
            genecount.set(i,0);
          }
        }
        
       repaint();
      
    }

    @Override
    public void mousePressed(MouseEvent e) {
        int i;
        for(i=0;i<genepicture.size();i++){
          Rectangle temp = (Rectangle)genepicture.get(i);
          if(e.getX()>temp.x&&e.getX()<(temp.x+temp.width)&&e.getY()>temp.y&&e.getY()<(temp.y+temp.height)&&e.getButton() == MouseEvent.BUTTON1&&fin==0){
               startGene = i;
             
          }
        }
        
 
    }

    @Override
    public void mouseReleased(MouseEvent e) {
        int i;
        Point2D.Double holder,end;
        for(i=0;i<genepicture.size();i++){
          Rectangle temp = (Rectangle)genepicture.get(i);
          if(e.getX()>temp.x&&e.getX()<(temp.x+temp.width)&&e.getY()>temp.y&&e.getY()<(temp.y+temp.height)&&e.getButton() == MouseEvent.BUTTON1&&fin==0){
            endGene = i;
           
          }
        }
        if(startGene!=-1&&endGene!=-1&&startGene!=endGene){
          Integer tem = (Integer)playerMakeMatrix.get(endGene*gamedifficulty+startGene);
          int n = tem.intValue();
          tem = (Integer)playerMakeMatrix.get(startGene*gamedifficulty+endGene);
          int m = tem.intValue();
          if(n==0&&m==0){

          Rectangle temp = (Rectangle)genepicture.get(startGene);
          int x1 = temp.x+temp.width/2;
          int y1 = temp.y+temp.height/2;
          temp = (Rectangle)genepicture.get(endGene);
          int x2 = temp.x+temp.width/2;
          int y2 = temp.y+temp.height/2;
          holder = new Point2D.Double(x1,y1);
          end =new Point2D.Double(x2, y2);
          if(flag ==1){
          line3.add(new Line2D.Double(holder,end));
          playerMakeMatrix.set(endGene*gamedifficulty+startGene, flag);
          mark.add(3);
          lab.add (endGene*gamedifficulty+startGene);
          }
          if(flag == -1){
          line4.add(new Line2D.Double(holder,end));
          playerMakeMatrix.set(endGene*gamedifficulty+startGene, flag);
          mark.add(4);
          lab.add(endGene*gamedifficulty+startGene);
          }
          startGene = -1;
          endGene = -1;
          }
        }
         repaint();
       
    }

    @Override
    public void mouseEntered(MouseEvent e) {
     
    }

    @Override
    public void mouseExited(MouseEvent e) {
     
    }
    //
    
    @Override
    public void actionPerformed(ActionEvent e) {
       if(e.getSource() == red){
        flag = -1;
       }
       if(e.getSource() == green){
        flag = 1;
       }
       if(e.getSource() == cancel&&(mark.size()-1)>=0){  
        Integer temp = (Integer)mark.get(mark.size()-1);
        int t = temp.intValue();
        temp = (Integer)lab.get(lab.size()-1);
        int l = temp.intValue();
        if(t==3){
         line3.remove(line3.size()-1);
         playerMakeMatrix.set(l, 0);
         mark.remove(mark.size()-1);
         lab.remove(lab.size()-1);
         repaint();
        }
        if(t==4){
         line4.remove(line4.size()-1);
         playerMakeMatrix.set(l,0);
         mark.remove(mark.size()-1);
         lab.remove(lab.size()-1);
         repaint();
        }
       }
      if(e.getSource()==finish){
        fin = 1;
        showAnswer.setEnabled(true);
        nextLevel.setEnabled(true);
        red.setEnabled(false);
        green.setEnabled(false);
        cancel.setEnabled(false);
        finish.setEnabled(false);
           try {
               finish();
           } catch (FileNotFoundException ex) {
               Logger.getLogger(GameInterface.class.getName()).log(Level.SEVERE, null, ex);
           } catch (IOException ex) {
               Logger.getLogger(GameInterface.class.getName()).log(Level.SEVERE, null, ex);
           }
       
       }
    if(e.getSource()== showAnswer){
        showAnswer();  
      }
    if(e.getSource()==nextLevel){
         initial ++;
         this.setVisible(false);
         new GameInterface();
        } 
     if(e.getSource() == exit){
        b.stop();
        int n = JOptionPane.showConfirmDialog(null, "Do you really want to give up?", "", JOptionPane.YES_NO_OPTION); 
        if (n == JOptionPane.YES_OPTION) { 
            this.setVisible(false);
               initial = 2;
               hpLong = 490;
               score = 0;
               new Welcome();  
        } else if (n == JOptionPane.NO_OPTION) { 
            b.start();
        } 
     }
    }
    public int CheckScore() {
    File file = new File("highscore.txt");
    int temp;
    FileReader fr = null;
        try {
            fr = new FileReader(file);
        } catch (FileNotFoundException ex) {
            temp =-999;
            Logger.getLogger(GameInterface.class.getName()).log(Level.SEVERE, null, ex);
        }
    BufferedReader buffer = new BufferedReader(fr);
    String s = null;
        try {
            s = buffer.readLine();
        } catch (IOException ex) {
            Logger.getLogger(GameInterface.class.getName()).log(Level.SEVERE, null, ex);
        }
    
    if(s==null){
     temp =-999;
    }else{
      temp =Integer.parseInt(s);
    }
    if(temp<score){
    return 1;
    }else{
     return 0;
    }
}
    public void SaveScore() throws IOException{
     File file = new File("highscore.txt");
     FileOutputStream outStream = null;
        try {
            outStream = new FileOutputStream(file);
        } catch (FileNotFoundException ex) {
            Logger.getLogger(GameInterface.class.getName()).log(Level.SEVERE, null, ex);
        }
     PrintWriter out  = new PrintWriter(outStream);
     out.println(score);
     out.flush();
     out.close();
     outStream.close();
    }
    private int ChoiceNum() {

       return (int) (Math.random() * gamedifficulty) ;
    }
   public class BloodBar extends Thread{

   public void run(){
       while(hp.height>0){
       try {
           hp = new Rectangle(hp.x,hp.y ,hp.width,hp.height-1);
           repaint();
           Thread.sleep(500);
       } catch (InterruptedException ex) {
           Logger.getLogger(BloodBar.class.getName()).log(Level.SEVERE, null, ex);
       }
      }
      if(hp.height<=0){
          GameInterface.this.setVisible(false);
          initial = 2;
          hpLong = 490;
           
               if(CheckScore()==1){
                   JOptionPane.showMessageDialog(null, "High score！");
                try {
                    SaveScore();
                } catch (IOException ex) {
                    Logger.getLogger(GameInterface.class.getName()).log(Level.SEVERE, null, ex);
                }
               }
          score = 0;
          JOptionPane.showMessageDialog(null, "Game over！");
          new Welcome();
      }
   }
 } 
} 