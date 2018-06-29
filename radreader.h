#ifndef RADREADER_H
#define RADREADER_H

#include <wx/wx.h>
#include "mainFrame.h"

class RadReader : public wxApp {
public:	
	virtual bool OnInit();
	
	MainFrame* mainFrame;
};

#endif
