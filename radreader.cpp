#include "radreader.h"

bool RadReader::OnInit() {
	mainFrame = new MainFrame(wxT("Radiolisis files reader"));
	mainFrame->Show(true);
	
	return true;
}

DECLARE_APP(RadReader)
IMPLEMENT_APP(RadReader)
