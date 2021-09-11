#include "cMain.h"

#include <fstream>

wxBEGIN_EVENT_TABLE(cMain, wxFrame)
    EVT_BUTTON(3, cMain::OnLogin)
    EVT_BUTTON(4, cMain::OnLogin)
wxEND_EVENT_TABLE()

cMain::cMain() : wxFrame(nullptr, 0, "Password Manager", wxDefaultPosition,  wxSize(800, 600))
{
    std::fstream file;

    file.open("data");
    
    if (file.is_open())
    {
        Login = new cLogin(this);
    }
    else
    {
        Creator = new cCreator(this);
    }
    
}

cMain::~cMain()
{
}

void cMain::OnLogin(wxCommandEvent& event)
{
    Login->Enter->SetLabel(Login->Input->GetValue());
    event.Skip();
}

void cMain::OnCreation(wxCommandEvent& event)
{
    // Add functionality
    event.Skip();
}
