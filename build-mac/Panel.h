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
        Panel(string sign, wxWindow *parent, int id, wxPoint defaultPosition, wxSize defaultSize);
        void OnLeftClicked(wxMouseEvent &event);
        void RefreshPanel();
        string getSign();
        void setSign(string newSign);

    private:
        bool clicked;
        wxStaticText *text;
        string sign;
};

#endif // PANEL_H
