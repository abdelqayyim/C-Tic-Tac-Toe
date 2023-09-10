#ifndef INPUTDIALOG_H
#define INPUTDIALOG_H

#include <wx/wxprec.h>
#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif
#include "Client.h"
using namespace std;

class InputDialog : public wxFrame
{
    public:
        InputDialog(Client * client);
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
        Client * client;
};

#endif // INPUTDIALOG_H
