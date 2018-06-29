#include "MainPanel.h"

MainPanel::MainPanel(wxWindow* parent) 
	: wxPanel (parent, wxID_ANY) {
	
	filesList = new wxListView(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLC_LIST);
	testText = new wxStaticText(this, wxID_STATIC, wxT("Przykładowy text."));
	
	
	wxVector<wxPoint2DDouble> points1;
    points1.push_back(wxPoint2DDouble(-0.2, 3.5));
    points1.push_back(wxPoint2DDouble(0.5, 2.5));
    points1.push_back(wxPoint2DDouble(1.2, 0.1));
    points1.push_back(wxPoint2DDouble(1.5, 1.6));
    points1.push_back(wxPoint2DDouble(2, 1.8));
    points1.push_back(wxPoint2DDouble(2.2, 2.1));
    points1.push_back(wxPoint2DDouble(2.7, 2));
    wxScatterPlotDataset::ptr dataset1(
        new wxScatterPlotDataset(
            wxColor(250, 10, 10, 0x28),
            wxColor(250, 10, 20, 0x98),
            points1)
        );
	mainPlotData.AddDataset(dataset1);
	
	mainPlot = new wxScatterPlotCtrl(this, wxID_ANY, mainPlotData);
	
	mainSizer = new wxBoxSizer(wxHORIZONTAL);
	mainSizer->Add(filesList, 1, wxEXPAND | wxALL, 5);
	mainSizer->Add(mainPlot, 1, wxEXPAND | wxALL, 5);
	
	SetSizer(mainSizer);
	
	mainSizer->Fit(this);
	mainSizer->SetSizeHints(this);
}
