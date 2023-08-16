#ifndef MYAPP_H
#define MYAPP_H

#include <wx/wxprec.h>
#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif
#include "cMain.h"

class MyApp : public wxApp
{
public:
    virtual bool OnInit();

private:
    cMain *frame1 = nullptr;
};

#endif // MYAPP_H
