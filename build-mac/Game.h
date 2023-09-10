#ifndef Game_H 
#define Game_H
using namespace std;
#include <string>
#include "Panel.h"
class Game
{
    public:
        std::string getGameState();
        Game();
        int getTurn();
        string getBoard();
        void updateTurn(int num);
        void updateBoard(string board);
        void setPanels(Panel **panels);
        void refreshBoard();
        void printBoard();

    private:
        int turn;
        string board;
        Panel *panels[9];
        // the board is pretty much who played which position
        // [0,1,2]
        // [3,4,5]
        // [6,7,8]
};

#endif