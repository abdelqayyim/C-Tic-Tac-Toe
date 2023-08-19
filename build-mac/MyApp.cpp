#include "MyApp.h"

wxIMPLEMENT_APP(MyApp);

bool MyApp::OnInit()
{
    frame1 = new InputDialog();
    frame2 = new cMain();

    frame1->Show();
    return true;
}
void MyApp::switchFrame(){
    frame1->Hide(); // Hide the input dialog
    frame2->Show(); // Show frame2
};
