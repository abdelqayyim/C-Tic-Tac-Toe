#ifndef PANEL_H
#define PANEL_H

#include <wx/wxprec.h>
#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif

class Panel: public wxPanel
{
    public:
        Panel(wxWindow *parent, int id, wxPoint defaultPosition, wxSize defaultSize);
        void OnLeftClicked(wxMouseEvent &event);
        void RefreshPanel();

    private:
        bool clicked;
        wxStaticText *text;
};

#endif // PANEL_H
