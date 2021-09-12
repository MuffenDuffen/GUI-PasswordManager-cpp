#include "cMain.h"

#include <fstream>

wxBEGIN_EVENT_TABLE(cMain, wxFrame)
    EVT_BUTTON(301, cMain::OnLogin)
    EVT_BUTTON(302, cMain::OnCreation)
wxEND_EVENT_TABLE()

cMain::cMain() : wxFrame(nullptr, 0, "Password Manager", wxDefaultPosition,  wxSize(800, 600))
{
    std::fstream file;

    file.open("data");

    if (!file.is_open())
    {
        Login = new wxPanel(this, 1, wxPoint(0, 0),wxSize(800, 600));
        
        LoginObject = new cLogin(Login);
    }
    else
    {
        Creator = new wxPanel(this, 2, wxPoint(0, 0),wxSize(800, 600));

        CreatorObject = new cCreator(Creator);
    }
    
}

cMain::~cMain()
{
}

void cMain::OnLogin(wxCommandEvent& event)
{
    LoginObject->Enter->SetLabel(LoginObject->Input->GetValue());
}


void cMain::OnCreation(wxCommandEvent& event)
{
    
    event.Skip();
}
