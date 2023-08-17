#include "cMain.h"
#include "Panel.h"
using namespace std;
#include "Score.cpp"

wxBEGIN_EVENT_TABLE(cMain, wxFrame)
wxEND_EVENT_TABLE();

cMain::cMain() : wxFrame(nullptr, wxID_ANY, "Tic Tac Toe", wxPoint(10, 10), wxSize(800, 600))
{
    this->ScoreBoard = new Score();
    ScoreBoard->displayScore();
    btn = new wxButton *[ROWS * COLUMNS];
    wxGridSizer *grid = new wxGridSizer(ROWS, COLUMNS, 0, 0);
    for (int x = 0; x < ROWS; x++) {
        for (int y = 0; y < COLUMNS; y++) {
            // THE BOXES ARE PANELS AND NOT BUTTONS
            Panel *panel = new Panel("O",this, (x * 3) + y, wxDefaultPosition, wxSize(FromDIP(30), FromDIP(30)));
            panel->Bind(wxEVT_LEFT_DOWN, &cMain::OnLeftClicked, this);

            bool isDark = (x + y) % 2 == 0;
            panel->SetBackgroundColour(isDark ? wxColor(80,80,80): *wxWHITE);

            grid->Add(panel, 1, wxEXPAND);

        }
    }
    this->SetSizer(grid);
    grid->Layout();
}

cMain::~cMain()
{
    delete[] btn;
}
void cMain::OnLeftClicked(wxMouseEvent &event){
    event.Skip();
}
void cMain::updateScore(string sign, int position){
    this->ScoreBoard[position] = sign;
};
void cMain::printScored(){

};