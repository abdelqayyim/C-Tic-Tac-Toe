#ifndef CMAIN_H
#define CMAIN_H

#include <wx/wxprec.h>
#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif

class cMain : public wxFrame
{
public:
    cMain();
    ~cMain();
    void OnButtonClicked(wxCommandEvent& event);
    void OnLeftClicked(wxMouseEvent& event);
    wxDECLARE_EVENT_TABLE();
    int ROWS = 3;
    int COLUMNS = 3;
    wxButton **btn;

private:
    // wxButton *mainBtn;
    // wxTextCtrl *mainText;

};

#endif // CMAIN_H
