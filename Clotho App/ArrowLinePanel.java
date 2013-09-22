import java.awt.*;
//画箭头用的一个类
public class ArrowLinePanel {
    public void  paint(int x1,int y1,int x2,int y2,Graphics g){
      
      int x3,y3,x4,y4;
      double angle;
    
      if(x2>x1){
      angle = Math.atan((y1-y2)*1.0/(x2-x1));
      x3 = (int) (x2-30*Math.cos(angle+Math.PI/6));
      y3 = (int)(y2+30*Math.sin(angle+Math.PI/6));
      x4 = (int)(x2-30*Math.cos(Math.PI/6-angle));
      y4 = (int)(y2-30*Math.sin(Math.PI/6-angle));
      }else if(x2<x1){
      angle = Math.atan((y1-y2)*1.0/(x1-x2));
      x3 = (int) (x2+30*Math.cos(angle+Math.PI/6));
      y3 = (int)(y2+30*Math.sin(angle+Math.PI/6));
      x4 = (int)(x2+30*Math.cos(Math.PI/6-angle));
      y4 = (int)(y2-30*Math.sin(Math.PI/6-angle));
      }else if(x1==x2&&y2>y1) {
      y3=y4=(int)(y2-30*Math.cos(Math.PI/6));
      x3=(int)(x2-30*Math.sin(Math.PI/6));
      x4=(int)(x2+30*Math.sin(Math.PI/6));
      }else{
      y3=y4=(int)(y2+30*Math.cos(Math.PI/6));
      x3=(int)(x2-30*Math.sin(Math.PI/6));
      x4=(int)(x2+30*Math.sin(Math.PI/6));
      }
      g.drawLine(x1, y1, x2, y2);
      g.drawLine(x2, y2, x3, y3);
      g.drawLine(x2, y2, x4, y4);
    }
    
}
