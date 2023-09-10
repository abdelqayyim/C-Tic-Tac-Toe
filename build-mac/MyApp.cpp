#include "MyApp.h"

wxIMPLEMENT_APP(MyApp);

bool MyApp::OnInit()
{
    this->game = new Game();
    this->client = new Client();
    frame1 = new InputDialog(this->client);

    frame1->Show();
    return true;
}
void MyApp::switchFrame(){
    frame1->Hide(); // Hide the input dialog
    
    frame2 = new cMain(this->client, this->game);
    // this->client->setMainWindow(frame2);
    frame2->Show(); // Show frame2
}; 
