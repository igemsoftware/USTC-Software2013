package ustc.gnap;

import javax.swing.*;
import java.awt.*;
import org.jfree.data.statistics.HistogramDataset;
import org.jfree.chart.*;
import org.jfree.data.time.*;
import org.jfree.data.xy.*;
import org.jfree.chart.*;
import org.jfree.chart.axis.*;
import org.jfree.chart.labels.StandardCategoryItemLabelGenerator;
import org.jfree.chart.labels.StandardCategoryToolTipGenerator;
import org.jfree.chart.plot.*;
import org.jfree.chart.plot.PlotOrientation;
import org.jfree.chart.renderer.xy.XYBarRenderer;
import org.jfree.chart.title.TextTitle;
import org.jfree.ui.ApplicationFrame;
import org.jfree.ui.RefineryUtilities;
import org.jfree.chart.labels.StandardCategorySeriesLabelGenerator;
class showGRN extends JPanel 
{
	static double[][] GRN;
	showGRN()throws Exception
	{
		this.setLayout(new FlowLayout());
		this.setBackground(Color.white);
		double[]grntoit=new double[220],grntoelse=new double[1749];
		grntoit=GRN[1748];
		for(int i=0;i<1749;i++)
		{
			grntoelse[i]=GRN[i][197];
		}

		this.add(new ChartPanel(  createChart(grntoit,grntoelse)   ));
		this.setVisible(true);
	}

	private static JFreeChart createChart(double[]grntoit,double[]grntoelse)
	{
		XYSeriesCollection xyc=new XYSeriesCollection();
		XYSeries xys0=new XYSeries("Regulated");
		for(int i=0;i<grntoit.length;i++)
			xys0.add(i,grntoit[i]);
		XYSeries xys1=new XYSeries("Regulating");
		for(int i=0;i<grntoelse.length;i++)
			xys1.add(i,grntoelse[i]);
		xyc.addSeries(xys0);
		xyc.addSeries(xys1);
		JFreeChart jfreechart = ChartFactory.createXYBarChart("Gene Regulatory Relationship", 
				"Gene ID", false, "Regulation",xyc, PlotOrientation.VERTICAL, true, false, false);
		XYPlot xyplot = (XYPlot)jfreechart.getPlot();
		xyplot.setDomainGridlinesVisible(true);
		xyplot.setRangeCrosshairVisible(true);
		xyplot.setRangeCrosshairPaint(Color.blue);

		NumberAxis numberaxis = (NumberAxis)xyplot.getRangeAxis();
		numberaxis.setStandardTickUnits(NumberAxis.createIntegerTickUnits());
		numberaxis.setAutoRange(true);


		/*
		XYBarRenderer xybarrenderer = (XYBarRenderer)xyplot.getRenderer();
		xybarrenderer.setDrawBarOutline(false);
		GradientPaint gradientpaint = new GradientPaint(0.0F, 0.0F, Color.blue, 0.0F, 0.0F, new Color(0, 0, 64));
		GradientPaint gradientpaint1 = new GradientPaint(0.0F, 0.0F, Color.green, 0.0F, 0.0F, new Color(0, 64, 0));
		GradientPaint gradientpaint2 = new GradientPaint(0.0F, 0.0F, Color.red, 0.0F, 0.0F, new Color(64, 0, 0));
		xybarrenderer.setSeriesPaint(0, gradientpaint);
		xybarrenderer.setSeriesPaint(1, gradientpaint1);
		xybarrenderer.setSeriesPaint(2, gradientpaint2);
		*/
		return jfreechart;
	}
}
