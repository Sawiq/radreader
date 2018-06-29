#ifndef MAINPANEL_H
#define MAINPANEL_H

#include <wx/wx.h>
#include <wx/listctrl.h>
#include "3rdparty/wxCharts/include/wx/charts/wxscatterplotctrl.h"

const int W_MARG = 5;

class MainPanel : public wxPanel {

public:
	MainPanel (wxWindow* parent);
	
	wxListView* filesList;
	wxStaticText* testText;

private:
	wxScatterPlotData mainPlotData;
	wxScatterPlotCtrl* mainPlot;
	wxBoxSizer* mainSizer;
	
};

#endif
