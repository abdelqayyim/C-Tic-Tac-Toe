#include "Game.h"

Game::Game(): turn(1), board("---------1\n"){//8 -

};
string Game:: getGameState(){
    return this->board;
}
void Game::updateTurn(int num){
    this->turn = num;
};
void Game::updateBoard(string board){
    this->board = board;
    this->turn = (this->turn == 1) ? 2 : 1;
};

void Game::refreshBoard() {
    // for (int i = 0; i < 9; i++) {
    //     if(this->board[i] != '-'){
    //         cout <<"SHOULD CHANGE PANEL: ";
    //         cout <<i<< endl;
    //         this->panels[i]->setSign(this->board[i]);
    //         this->panels[i]->Refresh();
    //     }
    // }
    // this->panels[0]->setSign('X');
    // this->panels[0]->Refresh();
}
int Game::getTurn(){
    return this->turn;
};
string Game::getBoard(){
    return this->board;
};
void Game:: printBoard(){
    cout <<this->board<< endl;
};
void Game::setPanels(Panel **panels)
{
    for (int i = 0; i < 9; i++) {
        this->panels[i] = panels[i];
    }
};