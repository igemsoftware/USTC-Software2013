package ustc.gnap;

import prefuse.visual.VisualItem;
import java.lang.*;
import java.util.*;
import java.io.*;
import java.awt.*;
import java.awt.event.*;
import java.text.SimpleDateFormat;
import javax.swing.*;
import org.jfree.chart.*;
import org.jfree.chart.axis.*;
import org.jfree.chart.plot.XYPlot;
import org.jfree.chart.renderer.xy.XYLineAndShapeRenderer;
import org.jfree.data.xy.*;
import org.jfree.data.time.*;
import org.jfree.ui.ApplicationFrame;
import org.jfree.ui.RefineryUtilities;
import org.jfree.chart.plot.*;

public class showConcen extends JPanel
{
	public XYSeries total;
	public XYSeriesCollection XYSeriescollection;
	static String[] gene_squence=new String[1800];
	static String[] gene_name=new String[1800];
	static String[] gene_id=new String[1800];
	static int N=0;
	NumberAxis dateaxis;
	XYLineAndShapeRenderer xylineandshaperenderer;
	JFreeChart createChart()//Here Input MillSecond
	{
		total = new XYSeries("Time");
		XYSeriescollection = new XYSeriesCollection();
		XYSeriescollection.addSeries(total);
		dateaxis = new NumberAxis("Time");
		NumberAxis Conaxis = new NumberAxis("Concentration");
		dateaxis.setAutoRange(true);
		dateaxis.setLowerMargin(0.0D);
		dateaxis.setUpperMargin(0.0D);
		dateaxis.setTickLabelsVisible(true);
		xylineandshaperenderer= new XYLineAndShapeRenderer(true, false);
		xylineandshaperenderer.setSeriesPaint(0, Color.green);
		xylineandshaperenderer.setSeriesStroke(0, new BasicStroke(1F, 0, 2));
		xylineandshaperenderer.setFillPaint(new Color(30,30,220),true );
		Conaxis.setAutoRange(true);
		Conaxis.setAutoRangeIncludesZero(false);

		XYPlot xyplot = new XYPlot(XYSeriescollection, dateaxis, Conaxis, xylineandshaperenderer);
		JFreeChart jfreechart = new JFreeChart("gNAP|Concentration Spline", new Font("Arial", 1, 24), xyplot, true);
		ChartUtilities.applyCurrentTheme(jfreechart);
		ChartPanel chartpanel = new ChartPanel(jfreechart, true);
		chartpanel.setBorder(BorderFactory.createCompoundBorder(BorderFactory.createEmptyBorder(4, 4, 4, 4), BorderFactory.createLineBorder(Color.black)));
		return jfreechart;

	}

	Scanner fileChange;
	void add()
	{
		for(int i=0;i<N;i++)
		{
			total.add(i,fileChange.nextDouble());
			long st=System.currentTimeMillis();
			long ed=st;
			while(ed-st<100)
				ed=System.currentTimeMillis();

		}

	}
	double [] times;
	double[][]val;
	double StandardDeviation(double[] dat)
	{
		double Mean=0;
		for(double d:dat)
			Mean+=d;
		Mean/=dat.length;
		double squerr=0;
		for(double d:dat)
		{
			squerr+=(d-Mean)*(d-Mean);
		}
		squerr/=dat.length;
		return Math.sqrt(squerr);
	}
	class updategraph extends javax.swing.Timer implements ActionListener
	{
		XYSeries Wave;
		double [] times,val;
		int i=0;
		public void actionPerformed(ActionEvent actionevent)
		{
			//System.out.println("running");
			if(val[N-1]>val[1])
				xylineandshaperenderer.setSeriesPaint(0, Color.red);
			else
				xylineandshaperenderer.setSeriesPaint(0, Color.blue);
			if(i<N)
			{
				Wave.add((double)(times[i])/8,val[i]);
				i++;
			}
			else
				stop();
		}
		void update(double[]times,double[]val,int num)
		{
			dateaxis.setLabel("Time:"+new Integer(num).toString() );
			this.Wave.clear();
			this.times=times;
			this.val=val;
			this.i=0;
		}
		updategraph(int i,XYSeries Wave)
		{
			super(i, null);
			Wave.clear();
			addActionListener(this);
			this.Wave=Wave;
			xylineandshaperenderer.setFillPaint(new Color(30,30,220),true );
			xylineandshaperenderer.setSeriesStroke(0, new BasicStroke(3F, 0, 2));
		}
	}
	void readfile()throws Exception
	{

		FileReader myFileReader=new FileReader("data/EachGeneChange");
		BufferedReader myBufferedReader=new BufferedReader(myFileReader);
		String str=myBufferedReader.readLine();
		Scanner timeline=new Scanner(str);
		N=0;
		while(timeline.hasNextDouble())
		{
			N++;
			timeline.nextDouble();
		}
		System.out.format("Num:%d\n",N);
		timeline.close();
		times=new double[N];
		val=new double[1800][N];
		fileChange=new Scanner(new File("data/EachGeneChange"));
		fileChange.nextLine();
		Scanner allinfo=new Scanner(new File("data/all_info"));
		for(int i=0;i<N;i++)
			times[i]=i;

		for(int i=0;i<1748;i++)
			for(int j=0;j<N;j++)
			{
				val[i][j]=fileChange.nextDouble();
			}
		for(int i=0;i<1747;i++)
		{
			allinfo.nextInt();
			allinfo.next();
			gene_squence[i]=allinfo.next();
			gene_name[i]=allinfo.next();
			gene_id[i]=allinfo.next();
			allinfo.nextLine();
		}
		gene_squence[1747]="User";
		gene_name[1747]="User";
		gene_id[1747]="User";
		for(int i=0;i<147;i++)
		{
			//System.out.format("%d:%s:%s:%s\n",i,gene_squence[i],gene_name[i],gene_id[i]);
		}
	}
	showConcen()throws Exception
	{
		readfile();
		final HashMap<String,java.util.Vector<Integer> > dyn=new HashMap<String,java.util.Vector<Integer>>();
		dyn.put("1500-1749",new java.util.Vector<Integer>());
		dyn.put("1200-1499",new java.util.Vector<Integer>());
		dyn.put("900-1199",new java.util.Vector<Integer>());
		dyn.put("600-899",new java.util.Vector<Integer>());
		dyn.put("300-599",new java.util.Vector<Integer>());
		dyn.put("0-299",new java.util.Vector<Integer>());

		JFreeChart jct=createChart();

		for(int i=0;i<1748;i++)
			if(StandardDeviation(val[i])>0.01)
				if(i<300)
					dyn.get("0-299").add(i);
				else if(i<600&&i>=300)
					dyn.get("300-599").add(i);
				else if(i<900&&i>=600)
					dyn.get("600-899").add(i);
				else if(i<1200&&i>=900)
					dyn.get("900-1199").add(i);
				else if(i<1500&&i>=1200)
					dyn.get("1200-1499").add(i);
				else if(i>=1500)
					dyn.get("1500-1749").add(i);

		final updategraph tks=new updategraph(50,total);
		
		java.util.Vector<String>list=new java.util.Vector<String>();
		list.add("1500-1749");
		list.add("1200-1499");
		list.add("900-1199");
		list.add("600-899");
		list.add("300-599");
		list.add("0-299");

		
		JPanel sxq=new JPanel();
		BoxLayout b1=new BoxLayout(sxq,BoxLayout.Y_AXIS);
		sxq.setLayout(b1);
		sxq.setBackground(Color.white);

		JPanel txtifo=new JPanel();
		final JTextArea dps=new JTextArea("Here Display Sequence");
		final JScrollPane jsp = new JScrollPane(dps);
		dps.setLineWrap(true);
		dps.setSize(600,50);
		txtifo.setSize(600,50);
		dps.setRows(5);
		txtifo.add(jsp);

		final sel selgen=new sel(dyn.get("1500-1749")){
			void selevent(String s){
			int lab=0;
			try{
				lab=Integer.parseInt(s);
				System.out.println(lab);
			}
			catch(Exception e)
			{}
			tks.update(times,val[lab],lab);

			if(!tks.isRunning()){
				tks.start();
			}
			else{
					tks.restart();
				}
			}
			public void movedonto(VisualItem e)
			{
				try
				{
					String s=(String) e.get(LABEL);
					int lab=Integer.parseInt(s);
					dps.setText("name:"+gene_name[lab]+"\n");	
					dps.append("ID:E"+gene_id[lab]+"\n");
					dps.append("Sequence:"+gene_squence[lab]+"\n");
					dps.setCaretPosition(0);    //0 代表第0行，代表你要设置的行
					dps.requestFocus();   
				}
				catch(Exception ex)
				{
				}
			}
		};



		JComboBox jcbox=new JComboBox<String>(list);
		jcbox.addItemListener(new ItemListener() {
			public void itemStateChanged(ItemEvent e) {
				selgen.draw(dyn.get(e.getItem()));
			}
		});
		sxq.setSize(100,500);
		sxq.add(jcbox);
		sxq.add(selgen);

		JPanel disinf=new JPanel();
		BoxLayout b2=new BoxLayout(disinf,BoxLayout.Y_AXIS);
		disinf.setLayout(b2);
		disinf.setBackground(Color.white);
		disinf.add(new ChartPanel(jct));
		disinf.add(txtifo);

		this.add(sxq);
		this.add(disinf);
		this.setBackground(Color.white);
	}
}
