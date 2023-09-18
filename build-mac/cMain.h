#ifndef CMAIN_H
#define CMAIN_H

#include <wx/wxprec.h>
#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif
#include "Score.cpp"
#include <boost/asio.hpp>
#include "Game.h"
#include "Panel.h"
#include "Client.h"
class cMain : public wxFrame
{
    public:
        cMain( Client * client, Game * game);
        ~cMain();
        wxDECLARE_EVENT_TABLE();
        void OnLeftClicked(wxMouseEvent &event, Client * client);
        const int ROWS = 3;
        const int COLUMNS = 3;
        wxButton **btn;
        void updateScore(string player, string position);
        void printScored();
        bool gameOver();
        void printBoard();
        void OnClose(wxCloseEvent &event);
        void updatePanels();
        void OnUpdateTimer(wxTimerEvent &event);

    private:
        Score *ScoreBoard;
        int playerTurn;
        string gameStatus;
        int winningPattern;
        Panel *panels[9];
        int moves; // this is how many moves have been made. 9 moves to finish a game
        std::thread receive_thread;
        Client *client;
        Game *game;
        wxTimer updateTimer;
};

#endif // CMAIN_H
