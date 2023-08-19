#ifndef INPUTDIALOG_H
#define INPUTDIALOG_H

#include <wx/wxprec.h>
#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif
using namespace std;

class InputDialog : public wxFrame
{
    public:
        InputDialog();
        ~InputDialog();
        void OnSubmitButtonClick(wxCommandEvent& event);
        void OnClose(wxCloseEvent &event);
        string getUsername();
        string getServerCode();
        bool getStatus();

    private:
        wxButton* submitButton;
        wxTextCtrl* userName;
        wxTextCtrl* serverCode;
        string userNameString;
        string serverCodeString;
        bool isLoggedIn;
};

#endif // INPUTDIALOG_H
