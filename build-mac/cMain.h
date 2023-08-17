#ifndef CMAIN_H
#define CMAIN_H

#include <wx/wxprec.h>
#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif
#include "Score.cpp"

class cMain : public wxFrame
{
public:
    cMain();
    ~cMain();
    wxDECLARE_EVENT_TABLE();
    void OnLeftClicked(wxMouseEvent &event);
    int ROWS = 3;
    int COLUMNS = 3;
    wxButton **btn;
    void updateScore(string player, string position);
    void printScored();

private:
    Score *ScoreBoard;
};

#endif // CMAIN_H
