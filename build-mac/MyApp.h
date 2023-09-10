#ifndef MYAPP_H
#define MYAPP_H

#include <wx/wxprec.h>
#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif
#include "cMain.h"
#include "InputDialog.h"
#include "Client.h"
#include "Game.h"

const wxEventType wxEVT_SWITCH_FRAME = wxNewEventType(); // Define the custom event ID

class MyApp : public wxApp
{
    public:
        virtual bool OnInit();
        void switchFrame();

    private:
        Client * client;
        Game *game;

        InputDialog *frame1 = nullptr;
        cMain *frame2 = nullptr;
};

#endif // MYAPP_H
