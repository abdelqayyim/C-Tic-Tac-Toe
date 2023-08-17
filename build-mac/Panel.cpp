#include "Panel.h"
#include <string>
using namespace std;

Panel::Panel(string sign, wxWindow *parent, int id, wxPoint defaultPosition, wxSize Size): wxPanel(parent, id), sign{sign}{
    this->clicked = false;
    this->Bind(wxEVT_LEFT_DOWN, &Panel::OnLeftClicked, this);

    wxBoxSizer *verticalSizer = new wxBoxSizer(wxVERTICAL);
    wxBoxSizer *horizontalSizer = new wxBoxSizer(wxHORIZONTAL);
    this->text = new wxStaticText(this, wxID_ANY, "", wxDefaultPosition, wxDefaultSize, wxALIGN_CENTER);
    wxFont font(100, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD);
    this->text->SetFont(font);
    horizontalSizer->Add(text, 1, wxALIGN_CENTER);
    verticalSizer->Add(horizontalSizer, 1, wxALIGN_CENTER);
    this->SetSizer(verticalSizer);
}
void Panel::OnLeftClicked(wxMouseEvent &event){
    this->clicked = true;
    this->RefreshPanel();
    this->Unbind(wxEVT_LEFT_DOWN, &Panel::OnLeftClicked, this);
    event.Skip();
};
void Panel::RefreshPanel(){
    if(clicked){
        this->text->SetLabel(this->sign);
        wxFont font(100, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD);
        this->text->SetFont(font);

        // Ensure the sizer layout is updated after changing the label text
        GetContainingSizer()->Layout();// Replace this with the actual method to get the sizer
    }
    else{
        this->text->SetLabel("");
    }
};