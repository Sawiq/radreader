#include "mainFrame.h"
#include "MainPanel.h"

MainFrame::MainFrame(const wxString& title)
	: wxFrame(NULL, wxID_ANY, title) {
	
	menuBar = new wxMenuBar;
	
	fileMenu = new wxMenu;
	fileMenu->Append(wxID_EXIT, wxT("&Exit\tCtrl-Q"), wxT("Quit this program"));
	
	helpMenu = new wxMenu;
	helpMenu->Append(wxID_ABOUT, wxT("&About...\tF1"), wxT("Show About dialog"));
	
	menuBar->Append(fileMenu, wxT("&File"));
	menuBar->Append(helpMenu, wxT("&Help"));
	
	SetMenuBar(menuBar);
	
	CreateStatusBar();
	SetStatusText(wxT("Test!"));
	
	mainPanel = new MainPanel(this);
	
	this->Connect(wxID_EXIT, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(MainFrame::OnQuit));
	this->Connect(wxID_ABOUT, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(MainFrame::OnAbout));
}

void MainFrame::OnQuit(wxCommandEvent& event) {
	this->Close();
}

void MainFrame::OnAbout(wxCommandEvent& event) {
	wxString msg;
	msg.Printf(wxT("Small and slick reader for IARC pulse radiolisis results. Using %s\n\nAuthor: Piotr Sawicki\nemail: psawicki@mitr.p.lodz.pl"), wxVERSION_STRING);
	wxMessageBox(msg, wxT("About RadReader"), wxOK | wxICON_INFORMATION, this);
}
