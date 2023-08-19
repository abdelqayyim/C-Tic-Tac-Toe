#include "InputDialog.h"
using namespace std;
#include <string>
#include "MyApp.h"

InputDialog:: InputDialog(): wxFrame(nullptr, wxID_ANY, "Tic Tac Toe", wxPoint(10, 10), wxSize(800, 600))
{
    this->Bind(wxEVT_CLOSE_WINDOW, &InputDialog::OnClose, this);
    this->isLoggedIn = false;

    // Create a panel to hold the input boxes and labels
        wxPanel *panel = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxSize(800, 600));

        wxBoxSizer *panelSizer = new wxBoxSizer(wxVERTICAL);

        // Create labels for the input fields
        wxStaticText *userNameLabel = new wxStaticText(panel, wxID_ANY, "Username:", wxDefaultPosition, wxDefaultSize);
        wxStaticText *serverCodeLabel = new wxStaticText(panel, wxID_ANY, "Server Code:", wxDefaultPosition, wxDefaultSize);

        submitButton = new wxButton(panel, wxID_ANY, "Submit", wxPoint(10, 10), wxSize(150, 50));
    userName = new wxTextCtrl(panel, wxID_ANY, "", wxPoint(10, 50), wxSize(150, 50));
    serverCode = new wxTextCtrl(panel, wxID_ANY, "", wxPoint(10, 100), wxSize(150, 50));

        panelSizer->Add(userNameLabel, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 10);
        panelSizer->Add(userName, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 10);
        panelSizer->Add(serverCodeLabel, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 10);
        panelSizer->Add(serverCode, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 10);
        panelSizer->Add(submitButton, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 10);

        panel->SetSizer(panelSizer);

        // Bind the button's click event to a handler function
        submitButton->Bind(wxEVT_BUTTON, &InputDialog::OnSubmitButtonClick, this);

        Centre();

};
InputDialog::~InputDialog(){};

void InputDialog::OnSubmitButtonClick(wxCommandEvent& event){
    wxString usernameValue = userName->GetValue();
    wxString serverCodeValue = serverCode->GetValue();

    // Convert wxString to string
    string usernameStr = string(usernameValue.mb_str());
    string serverCodeStr = string(serverCodeValue.mb_str());

    // Assign values
    this->isLoggedIn = true;
    this->userNameString = usernameStr;
    this->serverCodeString = serverCodeStr;

    // Print the values
    cout << "Username: " << usernameStr << endl;
    cout << "Server Code: " << serverCodeStr << endl;

    MyApp* app = dynamic_cast<MyApp*>(wxTheApp);
    if (app) {
        app->switchFrame();
    }
};
void InputDialog::OnClose(wxCloseEvent &event)
{
    this->Unbind(wxEVT_CLOSE_WINDOW, &InputDialog::OnClose, this);
    Destroy();  // Close the main window
    wxTheApp->Exit();  // Terminate the application
}
string InputDialog::getUsername(){
    return this->userNameString;
};
string InputDialog::getServerCode(){
    return this->serverCodeString;
};
bool InputDialog:: getStatus(){
    return this->isLoggedIn;
};