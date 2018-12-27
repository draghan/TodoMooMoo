// wxWidgets "Hello World" Program
// For compilers that support precompilation, includes "wx/wx.h".

#include <wx/wx.h>
#include "Frames/TodoMooMooMainFrame.h"


class MyApp : public wxApp
{
public:
    int OnExit() override;
    virtual bool OnInit();

};

wxIMPLEMENT_APP(MyApp);

bool MyApp::OnInit()
{
    wxInitAllImageHandlers();
    auto frame = new TodoMooMooMainFrame(nullptr);
    frame->Show(true);
    return true;
}

int MyApp::OnExit()
{
    return wxAppBase::OnExit();

}
