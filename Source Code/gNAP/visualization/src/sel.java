package ustc.gnap;


import java.util.*;
import javax.swing.AbstractAction;
import java.awt.event.ActionEvent;

import prefuse.Constants;
import prefuse.Display;
import prefuse.Visualization;
import prefuse.action.ActionList;
import prefuse.action.RepaintAction;
import prefuse.action.assignment.ColorAction;
import prefuse.action.distortion.Distortion;
import prefuse.action.distortion.FisheyeDistortion;
import prefuse.action.layout.Layout;
import prefuse.controls.AnchorUpdateControl;
import prefuse.controls.ControlAdapter;
import prefuse.data.Schema;
import prefuse.data.Table;
import prefuse.render.DefaultRendererFactory;
import prefuse.render.LabelRenderer;
import prefuse.util.ColorLib;
import prefuse.visual.VisualItem;

abstract class sel extends FisheyeMenu
{
	abstract void selevent(String label);
	public sel(Vector<Integer> input)throws Exception 
	{
		// create a new fisheye menu and populate it
		super();
		draw(input);
	}

	public void draw(Vector<Integer> input)
	{
		this.clearMenuItem();
		for ( int v:input) 
		{
			// add menu items that simply print their label when clicked
			this.addMenuItem(String.valueOf(v), new AbstractAction(){
						public void actionPerformed(ActionEvent e) {
							selevent( (String) ((VisualItem)e.getSource()).get(LABEL));
						}
					});
		}
		getVisualization().run("init");
	}
}
