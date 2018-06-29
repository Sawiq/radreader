#ifndef MAINFRAME_H 
#define MAINFRAME_H

#include <wx/wx.h>
#include "MainPanel.h"

class MainFrame : public wxFrame {
	
public:
	MainFrame(const wxString& title);
	
	void OnQuit(wxCommandEvent& event);
	void OnAbout(wxCommandEvent& event);
	
	wxMenu* fileMenu;
	wxMenu* helpMenu;
	wxMenuBar* menuBar;
	
	MainPanel* mainPanel;
	
};

#endif
