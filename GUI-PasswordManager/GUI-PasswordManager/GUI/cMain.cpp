#include "cMain.h"
#include "../cCredential.h"

#include <fstream>

#include "CreateLogin/CreateLoginPanel.h"
#include "Login/LoginPanel.h"

wxBEGIN_EVENT_TABLE(cMain, wxFrame)
    EVT_BUTTON(301, cMain::OnLogin)
    EVT_BUTTON(302, cMain::OnCreation)
wxEND_EVENT_TABLE()

cMain::cMain() : wxFrame(nullptr, 0, "Password Manager", wxDefaultPosition,  wxSize(800, 600))
{
    std::fstream file;

    file.open("data");

    if (file.is_open())
    {
        CreateLoginPanel = new cCreateLoginPanel(this);
    }
    else
    {
        LoginPanel = new cLoginPanel(this);
    }
}

cMain::~cMain()
{
}

void cMain::OnLogin(wxCommandEvent& event)
{
    
    delete LoginPanel;
    MainUiPanel = new wxPanel(this, 3, wxPoint(0, 0), wxSize(800, 561));
    
    std::vector<cCredential> lol;
    lol.push_back(cCredential{"LOL", "PASS", "@"});
    
    auto* masterSizer = new wxBoxSizer(wxVERTICAL);
           
    Search = new wxTextCtrl(MainUiPanel, 999, "", wxPoint(0, 0), wxSize(200, 20));
    auto* searchSizer = new wxBoxSizer(wxHORIZONTAL);
    searchSizer->AddSpacer(300);
    searchSizer->Add(Search, 1, wxEXPAND, wxALL);
    searchSizer->AddSpacer(300);
    masterSizer->Add(searchSizer, 0, wxEXPAND, wxDOWN);

    Credentials = new wxListBox(MainUiPanel, 1000, wxPoint(0, 0), wxSize(800, 400));
    for(auto cred : lol)
    {
        Credentials->Append(cred.App + " - " + cred.Password + " - " + cred.EMail);
    }
    masterSizer->Add(Credentials, 8, wxEXPAND, wxALL);

    Add = new wxButton(MainUiPanel, 303, "+", wxPoint(0, 0), wxSize(800, 30));
    Add->SetFont(wxFont(30, wxFONTFAMILY_TELETYPE, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL));
    masterSizer->Add(Add, 1, wxEXPAND);

    MainUiPanel->SetSizer(masterSizer);
    MainUiPanel->Layout();
    masterSizer->Layout();
    
}


void cMain::OnCreation(wxCommandEvent& event)
{
    
    event.Skip();
}
