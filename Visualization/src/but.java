package ustc.gnap;

import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
class but extends JButton implements  MouseListener
{
	public void mouseClicked(MouseEvent e)
	{
	}
	public void mouseDragged(MouseEvent e)
	{
	}
	public void mousePressed(MouseEvent e)
	{
	}
	public void mouseReleased(MouseEvent e)
	{
	}
	public void mouseWheelMoved(MouseEvent e)
	{
	}
	public void mouseExited(MouseEvent e)
	{
	}
	public void mouseEntered(MouseEvent e)
	{
	}
	but(String txt)
	{
		super(txt);
		this.addMouseListener(this);
	}
}
