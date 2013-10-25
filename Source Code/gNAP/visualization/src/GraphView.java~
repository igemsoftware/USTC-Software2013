package ustc.gnap;

import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.WindowAdapter;
import java.awt.event.WindowEvent;
import java.awt.geom.Rectangle2D;
import java.util.*;
import java.io.*;

import javax.swing.*;
import javax.swing.ListSelectionModel;
import javax.swing.event.ChangeEvent;
import javax.swing.event.ChangeListener;
import javax.swing.event.ListSelectionEvent;
import javax.swing.event.ListSelectionListener;

import prefuse.Display;
import prefuse.Visualization;
import prefuse.action.ActionList;
import prefuse.action.RepaintAction;
import prefuse.action.assignment.ColorAction;
import prefuse.action.filter.GraphDistanceFilter;
import prefuse.action.layout.graph.ForceDirectedLayout;
import prefuse.activity.Activity;
import prefuse.controls.*;
import prefuse.data.*;
import prefuse.data.event.TupleSetListener;
import prefuse.data.io.GraphMLReader;
import prefuse.data.tuple.TupleSet;
import prefuse.render.DefaultRendererFactory;
import prefuse.render.LabelRenderer;
import prefuse.util.ColorLib;
import prefuse.util.GraphLib;
import prefuse.util.GraphicsLib;
import prefuse.util.display.DisplayLib;
import prefuse.util.display.ItemBoundsListener;
import prefuse.util.force.ForceSimulator;
import prefuse.util.io.IOLib;
import prefuse.util.ui.JForcePanel;
import prefuse.util.ui.JValueSlider;
import prefuse.util.ui.UILib;
import prefuse.visual.VisualGraph;
import prefuse.visual.VisualItem;

import ustc.gnap.showConcen;
/*
 *iGEM:USTC-Software2013
 *XuHao
 *blog.stlover.org
 */
public class GraphView extends JPanel 
{
    private static final String graph = "graph";
    private static final String nodes = "graph.nodes";
    private static final String edges = "graph.edges";
	JTextArea dps;
    private Visualization m_vis;
	JScrollPane jsp; 
	public void foucs()
	{

	}
	public GraphView() throws Exception
	{
		super(new BorderLayout());

		Graph g=new Graph(true);
		String label="name";
		g.addColumn("id", String.class); 
		g.addColumn("name", String.class); 

		for(int i=0;i<1749;i++)
		{
			Node n=g.addNode();
			n.setString("id",Integer.toString(i));
			n.setString("name",showConcen.gene_name[i] );
		}

		for(int i=0;i<1749;i++)
			for(int j=0;j<220;j++)
				if(showGRN.GRN[i][j]!=0)
				{
					g.addEdge(i,j);
				}


		// create a new, empty visualization for our data
		m_vis = new Visualization();

		// --------------------------------------------------------------------
		// set up the renderers

		LabelRenderer tr = new LabelRenderer();
		tr.setRoundedCorner(8, 8);
		m_vis.setRendererFactory(new DefaultRendererFactory(tr));

		// --------------------------------------------------------------------
		// register the data with a visualization

		// adds graph to visualization and sets renderer label field
		setGraph(g, label);

		// fix selected focus nodes
		TupleSet focusGroup = m_vis.getGroup(Visualization.FOCUS_ITEMS); 
		focusGroup.addTupleSetListener(new TupleSetListener() 
				{
					public void tupleSetChanged(TupleSet ts, Tuple[] add, Tuple[] rem)
		{
			for ( int i=0; i<rem.length; ++i )
			((VisualItem)rem[i]).setFixed(false);
		for ( int i=0; i<add.length; ++i ) 
		{
			((VisualItem)add[i]).setFixed(false);
			((VisualItem)add[i]).setFixed(true);
		}
		if ( ts.getTupleCount() == 0 ) 
		{
			ts.addTuple(rem[0]);
			((VisualItem)rem[0]).setFixed(false);
		}
		m_vis.run("draw");
		}
		});



		// --------------------------------------------------------------------
		// create actions to process the visual data

		int hops = 30;
		final GraphDistanceFilter filter = new GraphDistanceFilter(graph, hops);

		ColorAction fill = new ColorAction(nodes, 
				VisualItem.FILLCOLOR, ColorLib.rgb(200,200,255));
		fill.add(VisualItem.FIXED, ColorLib.rgb(255,00,255));
		fill.add(VisualItem.HIGHLIGHT, ColorLib.rgb(255,200,125));

		ActionList draw = new ActionList();
		draw.add(filter);
		draw.add(fill);
		draw.add(new ColorAction(nodes, VisualItem.STROKECOLOR, 0));
		draw.add(new ColorAction(nodes, VisualItem.TEXTCOLOR, ColorLib.rgb(0,0,0)));
		draw.add(new ColorAction(edges, VisualItem.FILLCOLOR, ColorLib.gray(200)));
		draw.add(new ColorAction(edges, VisualItem.STROKECOLOR, ColorLib.gray(200)));

		ActionList animate = new ActionList(Activity.INFINITY);
		animate.add(new ForceDirectedLayout(graph));
		animate.add(fill);
		animate.add(new RepaintAction());

		// finally, we register our ActionList with the Visualization.
		// we can later execute our Actions by invoking a method on our
		// Visualization, using the name we've chosen below.
		m_vis.putAction("draw", draw);
		m_vis.putAction("layout", animate);

		m_vis.runAfter("draw", "layout");


		// --------------------------------------------------------------------
		// set up a display to show the visualization

		Display display = new Display(m_vis);
		display.setSize(700,700);
		display.pan(350, 350);
		display.setForeground(Color.GRAY);
		display.setBackground(Color.WHITE);

		// main display controls

		display.addControlListener(new FocusControl(1));
		display.addControlListener(new DragControl());
		display.addControlListener(new PanControl());
		display.addControlListener(new ZoomControl());
		display.addControlListener(new WheelZoomControl());
		display.addControlListener(new ZoomToFitControl());
		display.addControlListener(new NeighborHighlightControl());
		display.addControlListener(new HoverActionControl("Print id"){
									public void itemEntered(VisualItem item, java.awt.event.MouseEvent e){
										String s=(String) item.getString("id");
										int lab=Integer.parseInt(s);
										dps.setText("  No:"+lab+"\n");	
										dps.append("  Name:"+showConcen.gene_name[lab]+"\n");	
										dps.append("  ID:E"+showConcen.gene_id[lab]+"\n\n");
										//dps.append("Sequence:"+showConcen.gene_squence[lab]+"\n\n");
										dps.append("  Regulated:\n");
										for(int i=0;i<220;i++)
											if(showGRN.GRN[lab][i]!=0)
												{
													dps.append("  No:"+i+"\n");	
													dps.append("  Regulation:"+showGRN.GRN[lab][i]+"\n");
													dps.append("  Name:"+showConcen.gene_name[i]+"\n");	
													dps.append("  ID:E"+showConcen.gene_id[i]+"\n");
													//dps.append("Sequence:"+showConcen.gene_squence[i]+"\n");
												}
										dps.append("\n  Regulating: \n");
										for(int i=0;i<1749;i++)
											if(showGRN.GRN[i][lab]!=0)
												{
													dps.append("  No:"+i+"\n");	
													dps.append("  Regulation:"+showGRN.GRN[i][lab]+"\n");
													dps.append("  Name:"+showConcen.gene_name[i]+"\n");	
													dps.append("  ID:E"+showConcen.gene_id[i]+"\n");
													//dps.append("Sequence:"+showConcen.gene_squence[i]+"\n");
												}
										dps.setCaretPosition(0);    //0 代表第0行，代表你要设置的行
										dps.requestFocus();
									}
		});
		// overview display
		display.setBackground(Color.WHITE);

		// --------------------------------------------------------------------        
		// launch the visualization

		// create a panel for editing force values

		ForceSimulator fsim = ((ForceDirectedLayout)animate.get(0)).getForceSimulator();
		JForcePanel fpanel = new JForcePanel(fsim);


		filter.setDistance(1);
		JSplitPane split = new JSplitPane();

		split.setLeftComponent(display);
		dps=new JTextArea("Here Display Sequence",30,25);
		dps.setLineWrap(true);
		jsp= new JScrollPane(dps);
		JPanel pjsp=new JPanel();
		pjsp.setSize(100,100);
		pjsp.add(jsp);
		split.setRightComponent(pjsp);
		split.setOneTouchExpandable(true);
		split.setContinuousLayout(false);
		split.setDividerLocation(700);

		// now we run our action list
		m_vis.run("draw");

		add(split);
	}

	public void setGraph(Graph g, String label) 
	{
		// update labeling
		DefaultRendererFactory drf = (DefaultRendererFactory)
			m_vis.getRendererFactory();
		((LabelRenderer)drf.getDefaultRenderer()).setTextField(label);

		// update graph
		m_vis.removeGroup(graph);
		VisualGraph vg = m_vis.addGraph(graph, g);
		m_vis.setValue(edges, null, VisualItem.INTERACTIVE, Boolean.FALSE);
		VisualItem f = (VisualItem)vg.getNode(0);
		m_vis.getGroup(Visualization.FOCUS_ITEMS).setTuple(f);
		f.setFixed(false);
	}

	// ------------------------------------------------------------------------
	// Main and demo methods

	// ------------------------------------------------------------------------

	public static class FitOverviewListener implements ItemBoundsListener
	{
		private Rectangle2D m_bounds = new Rectangle2D.Double();
		private Rectangle2D m_temp = new Rectangle2D.Double();
		private double m_d = 15;
		public void itemBoundsChanged(Display d) {
			d.getItemBounds(m_temp);
			GraphicsLib.expand(m_temp, 25/d.getScale());

			double dd = m_d/d.getScale();
			double xd = Math.abs(m_temp.getMinX()-m_bounds.getMinX());
			double yd = Math.abs(m_temp.getMinY()-m_bounds.getMinY());
			double wd = Math.abs(m_temp.getWidth()-m_bounds.getWidth());
			double hd = Math.abs(m_temp.getHeight()-m_bounds.getHeight());
			if ( xd>dd || yd>dd || wd>dd || hd>dd ) {
				m_bounds.setFrame(m_temp);
				DisplayLib.fitViewToBounds(d, m_bounds, 0);
			}
		}
	}
} // end of class GraphView
