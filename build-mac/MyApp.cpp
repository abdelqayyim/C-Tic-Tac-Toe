#include "MyApp.h"

wxIMPLEMENT_APP(MyApp);

bool MyApp::OnInit()
{
    frame1 = new cMain();
    frame1->Show();
    return true;
}
