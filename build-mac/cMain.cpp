#include "cMain.h"
using namespace std;

wxBEGIN_EVENT_TABLE(cMain, wxFrame)
    // EVT_BUTTON(10001, cMain::onButtonClicked)
    // EVT_BUTTON(10001, cMain::onButtonClicked)
wxEND_EVENT_TABLE();

cMain::cMain() : wxFrame(nullptr, wxID_ANY, "Tic Tac Toe", wxPoint(10, 10), wxSize(800, 600))
{
    // mainText = new wxTextCtrl(this, wxID_ANY, "Enter Session Code", wxPoint(10, 10), wxSize(300, 30));
    // mainBtn = new wxButton(this, 10001, "Enter", wxPoint(80, 50), wxSize(150, 50));
    btn = new wxButton*[ROWS*COLUMNS];
    wxGridSizer *grid = new wxGridSizer(ROWS, COLUMNS, 0, 0);
    for (int x = 0; x < ROWS; x++) {
        for (int y = 0; y < COLUMNS; y++) {
            // wxButton *newBtn = new wxButton(this, (x * 3) + y, std::to_string((x * 3) + y));
            // newBtn->SetInitialSize(wxSize(150, 150));
            // btn[y * ROWS + x] = newBtn;
            // grid->Add(btn[y * ROWS + x], 1,  wxEXPAND | wxALL);

            // btn[y * ROWS + x]->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &cMain::OnButtonClicked, this);

            // THE BOXES ARE PANELS AND NOT BUTTONS
            auto square = new wxPanel(this, (x * 3) + y, wxDefaultPosition, wxSize(FromDIP(30), FromDIP(30)));
            square->Bind(wxEVT_LEFT_DOWN, &cMain::OnLeftClicked, this);
            wxFont font(100, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD);

            // SETUP THE BOX FONT AND ALIGNMENT
            wxBoxSizer *verticalSizer = new wxBoxSizer(wxVERTICAL);
            wxBoxSizer *horizontalSizer = new wxBoxSizer(wxHORIZONTAL);
            wxStaticText *text = new wxStaticText(square, (x * 3) + y, "X");
            horizontalSizer->Add(text, 1, wxALIGN_CENTER);
            verticalSizer->Add(horizontalSizer, 1, wxALIGN_CENTER);
            square->SetSizer(verticalSizer);
            text->SetFont(font);


            bool isDark = (x + y) % 2 == 0;
            square->SetBackgroundColour(isDark ? wxColor(80,80,80): *wxWHITE);

            grid->Add(square, 1, wxEXPAND);

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

void cMain::OnButtonClicked(wxCommandEvent& event)
{
    cout << event.GetId() << endl;
    event.Skip();
}
void cMain::OnLeftClicked(wxMouseEvent& event)
{
    cout << event.GetId() << endl;
    event.Skip();
}
