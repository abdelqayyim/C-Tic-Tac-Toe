#ifndef PANEL_H
#define PANEL_H

#include <wx/wxprec.h>
#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif
#include <string>
using namespace std;
class Panel : public wxPanel
{
    public:
        Panel(char sign, wxWindow *parent, int id, wxPoint defaultPosition, wxSize defaultSize);
        void OnLeftClicked(wxMouseEvent &event);
        void RefreshPanel();
        char getSign();
        void setSign(char newSign);
        wxStaticText * getText();

    private:
        bool clicked;
        wxStaticText *text;
        char sign;
};

#endif // PANEL_H
