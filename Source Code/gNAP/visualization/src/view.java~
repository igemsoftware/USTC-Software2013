package ustc.gnap;


import java.lang.*;
import java.util.*;
import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
import java.io.*;
import java.text.*;

import prefuse.visual.VisualItem;

import org.jfree.data.statistics.HistogramDataset;
import org.jfree.chart.*;
import org.jfree.data.time.*;
import org.jfree.data.xy.*;
import org.jfree.chart.*;
import org.jfree.chart.axis.*;
import org.jfree.chart.labels.StandardCategoryItemLabelGenerator;
import org.jfree.chart.labels.StandardCategoryToolTipGenerator;
import org.jfree.chart.plot.CategoryPlot;
import org.jfree.chart.plot.PlotOrientation;
import org.jfree.chart.renderer.category.BarRenderer;
import org.jfree.chart.title.TextTitle;
import org.jfree.data.category.CategoryDataset;
import org.jfree.data.category.DefaultCategoryDataset;
import org.jfree.ui.ApplicationFrame;
import org.jfree.ui.RefineryUtilities;
import org.jfree.chart.labels.StandardCategorySeriesLabelGenerator;

public class view extends JFrame
{
	CardLayout cl;
	class changeCard extends but
	{
		JPanel par;
		String card;
		public void mouseClicked(MouseEvent e)
		{
			cl.show(par,card);
		}
		changeCard(String s,JPanel par,String card)
		{
			super(s);
			this.par=par;
			this.card=card;
		}
	}
	view()throws Exception
	{
		this.setBounds(100, 100, 1024, 600);
		this.getContentPane().setBackground(Color.white);
		this.setTitle("gNAP|Data Analyse");
		this.setLayout(new FlowLayout());

		BoxLayout b1=new BoxLayout(this.getContentPane(),BoxLayout.Y_AXIS);
		this.setLayout(b1);

		cl=new CardLayout();
		JPanel mainp=new JPanel();
		mainp.setLayout(cl);

		mainp.add(new showGRN(),"showGRN");
		mainp.add(new showConcen(),"showConcen");
		mainp.add(new GraphView(),"ShowNet");
		this.add(mainp);

		JPanel cdb=new JPanel();
		cdb.add(new changeCard("ShowGRN",mainp,"showGRN"));
		cdb.add(new changeCard("ShowConcen",mainp,"showConcen"));
		cdb.add(new changeCard("ShowNet",mainp,"ShowNet"));
		cdb.setBackground(Color.white);

		this.add(mainp);
		this.add(cdb);

		this.setVisible(true);
	}

	public static void main(String[] args)throws Exception
	{
		Scanner fileGRN=new Scanner(new File("data/new_GRN"));
		showGRN.GRN=new double[1800][220];
		for(int j=0;j<1749;j++)
			for(int i=0;i<220;i++)
				showGRN.GRN[j][i]=fileGRN.nextDouble();
		new view();
	}
}

