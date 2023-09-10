#include "cMain.h"
#include "Panel.h"
#include <iostream>
#include <thread>
#include <string>
#include <boost/asio.hpp>
#include "Game.h"
using namespace std;

wxBEGIN_EVENT_TABLE(cMain, wxFrame)
wxEND_EVENT_TABLE();

cMain::cMain(Client * client, Game * game) : wxFrame(nullptr, wxID_ANY, "Tic Tac Toe", wxPoint(10, 10), wxSize(800, 600)) , client(client), game(game) 
{

    this->Bind(wxEVT_CLOSE_WINDOW, &cMain::OnClose, this);
    //  GAME SETUP
    this->ScoreBoard = new Score();
    ScoreBoard->displayScore();


    std::thread receive_thread([&client, this]()
                               { client->create_connection(client, this->game); });
    receive_thread.detach();

    
    btn = new wxButton *[ROWS * COLUMNS];
    wxGridSizer *grid = new wxGridSizer(ROWS, COLUMNS, 0, 0);
    for (int x = 0; x < ROWS; x++) {
        for (int y = 0; y < COLUMNS; y++) {
            // THE BOXES ARE PANELS AND NOT BUTTONS
            Panel *panel = new Panel(' ',this, (x * 3) + y, wxDefaultPosition, wxSize(FromDIP(30), FromDIP(30)));
            panel->Bind(wxEVT_LEFT_DOWN, [this, client](wxMouseEvent& event) {
                this->OnLeftClicked(event, client);
            });

            this->panels[(x * 3) + y] = panel;

            // bool isDark = (x + y) % 2 == 0;
            // panel->SetBackgroundColour(isDark ? wxColor(80,80,80): *wxWHITE);
            panel->SetBackgroundColour(wxColor(80,80,80));
            grid->Add(panel, 1, wxEXPAND);

        }
    }
    this->SetSizer(grid);
    grid->Layout();
    this->gameStatus = "ON";
    this->playerTurn = 1;
    Center();
    this->game->setPanels(this->panels); // ASSIGN HERE
}

cMain::~cMain()
{
    delete[] btn;
}
void cMain::OnLeftClicked(wxMouseEvent &event, Client * client){
    Panel *clickedPanel = dynamic_cast<Panel *>(event.GetEventObject());
    int panelID = clickedPanel->GetId();

    // Check if the game is still in progress and the clicked panel is empty
    if (gameStatus == "ON" && clickedPanel->getSign() == ' ' && client->getPosition() == this->game->getTurn()) {   
        clickedPanel->setSign(client->getSign());
        string oldBoard = this->game->getBoard();
        oldBoard[8] = (client->getPosition() == 1) ? '2' : '1';
        game->updateBoard(oldBoard);


        //send this to serve
        this->client->send_message(this->game->getGameState());

        // Check for a win or draw
        if (gameOver() == true) {
            this->gameStatus = "OVER";
        }
    }
    event.Skip();
}
// void cMain::updateScore(string sign, int position){
//     this->ScoreBoard[position] = sign;
// };
void cMain::printScored(){

};
bool cMain::gameOver(){
    // printBoard();
    int possibleWins[9][3] = {
        {0, 1, 2},
        {3, 4, 5},
        {6, 7, 8},
        {0, 3, 6},
        {1, 4, 7},
        {2, 5, 8},
        {0, 4, 8},
        {2, 4, 6}
    };
    
    for (int i = 0; i < 8; i++) {
        if (panels[possibleWins[i][0]]->getSign() != ' ' && (panels[possibleWins[i][0]]->getSign() == panels[possibleWins[i][1]]->getSign()) && (panels[possibleWins[i][0]]->getSign() == panels[possibleWins[i][2]]->getSign())){
            panels[possibleWins[i][0]]->SetBackgroundColour(wxColor(75,145,4));
            panels[possibleWins[i][1]]->SetBackgroundColour(wxColor(75,145,4));
            panels[possibleWins[i][2]]->SetBackgroundColour(wxColor(75,145,4));

            panels[possibleWins[i][0]]->Refresh();
            panels[possibleWins[i][1]]->Refresh();
            panels[possibleWins[i][2]]->Refresh();

            return true;
        }
    }
    
    return false;
};
void cMain:: printBoard(){
    cout <<"_______________________"<< endl;
    cout <<panels[0]->getSign();
    cout <<panels[1]->getSign();
    cout <<panels[2]->getSign()<<endl;
    cout <<panels[3]->getSign();
    cout <<panels[4]->getSign();
    cout <<panels[5]->getSign()<<endl;
    cout <<panels[6]->getSign();
    cout <<panels[7]->getSign();
    cout <<panels[8]->getSign()<<endl;
};
void cMain::OnClose(wxCloseEvent &event)

{
    Destroy();
    wxTheApp->Exit(); // Terminate the application
}