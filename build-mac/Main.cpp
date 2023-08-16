// wxWidgets "Hello World" Program
// https://siytek.com/macos-gui-cpp/
 
// For compilers that support precompilation, includes "wx/wx.h".
#include <wx/wxprec.h>
 
#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif

class cMain : public wxFrame
{
    public:
        cMain();
        ~cMain(){};
        wxButton *mainBtn = nullptr;

        void onButtonCLicked(wxCommandEvent& event)
        wxDECLARE_EVENT_TABL();

    private:
};

wxBEGIN_EVENT_TABLE(cMain, wxFrame);
EVT_BUTTON(10001, onButtonCLicked);
wxEND_EVENT_TABLE();

cMain::cMain():wxFrame(nullptr, wxID_ANY, "Tic Tac Toe", wxPoint(30,30), wxSize(800,600))
{
    mainBtn = new wxButton(this, 10001, "Enter", wxPoint(10,10), wxSize(150,50));
}
void cMain:: onButtonCLicked()
{

}
enum
{
    ID_Hello = 1
}; 

class MyApp : public wxApp
{
    public:
        virtual bool OnInit();
        // MyApp();
        // ~MyApp();

    private:
        cMain *frame1 = nullptr;
};
 
// cMain::cMain(): wxFrame(nullptr, wxID_ANY, "Tic Tac Toe")
// {
// }
 
wxIMPLEMENT_APP(MyApp);
 
bool MyApp::OnInit()
{
    frame1 = new cMain();
    frame1->Show();
    return true;
}
 
 