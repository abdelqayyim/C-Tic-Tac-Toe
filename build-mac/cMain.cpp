#include "cMain.h"
#include "Panel.h"
using namespace std;

wxBEGIN_EVENT_TABLE(cMain, wxFrame)
wxEND_EVENT_TABLE();

cMain::cMain() : wxFrame(nullptr, wxID_ANY, "Tic Tac Toe", wxPoint(10, 10), wxSize(800, 600))
{
    btn = new wxButton*[ROWS*COLUMNS];
    wxGridSizer *grid = new wxGridSizer(ROWS, COLUMNS, 0, 0);
    for (int x = 0; x < ROWS; x++) {
        for (int y = 0; y < COLUMNS; y++) {
            // THE BOXES ARE PANELS AND NOT BUTTONS
            Panel *panel = new Panel(this, (x * 3) + y, wxDefaultPosition, wxSize(FromDIP(30), FromDIP(30)));

            bool isDark = (x + y) % 2 == 0;
            panel->SetBackgroundColour(isDark ? wxColor(80,80,80): *wxWHITE);

            grid->Add(panel, 1, wxEXPAND);

            //TODO: make it so that the button appears when the panel is clicked (look at eventlistener)
            //TODO: the panel colors should be the same as the same
            //TODO: if a person has three in a row, then the respective panels should flash and GAME OVER
        }
    }
    this->SetSizer(grid);
    grid->Layout();
}

cMain::~cMain()
{
    delete[] btn;
}

