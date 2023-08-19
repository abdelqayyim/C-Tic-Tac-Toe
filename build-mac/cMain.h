#ifndef CMAIN_H
#define CMAIN_H

#include <wx/wxprec.h>
#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif
#include "Score.cpp"
#include "Panel.h"
#include "Player.h"

class cMain : public wxFrame
{
    public:
        cMain();
        ~cMain();
        wxDECLARE_EVENT_TABLE();
        void OnLeftClicked(wxMouseEvent &event);
        const int ROWS = 3;
        const int COLUMNS = 3;
        wxButton **btn;
        void updateScore(string player, string position);
        void printScored();
        bool gameOver();
        void printBoard();
        void OnClose(wxCloseEvent &event);

    private:
        Score *ScoreBoard;
        int playerTurn;
        string gameStatus;
        int winningPattern;
        Panel *panels[9];
        int moves; // this is how many moves have been made. 9 moves to finish a game
        Player players[2];
};

#endif // CMAIN_H
