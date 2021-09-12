#include "cMain.h"
#include "../cCredential.h"

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
        LoginPanel = new wxPanel(this, 1, wxPoint(0, 0),wxSize(800, 600));
        
        auto* masterSizer = new wxBoxSizer(wxVERTICAL);

        // Big Text
        const auto titleFont = wxFont(45, wxFONTFAMILY_MODERN, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL);
        Text = new wxStaticText(LoginPanel, 101, "Password Manager", wxPoint(0, 0), wxSize(300, 45), wxALIGN_CENTER_HORIZONTAL);
        Text->SetFont( titleFont);
        masterSizer->AddSpacer(200);
        masterSizer->Add(Text, 4, wxEXPAND,  wxALL);
        masterSizer->AddSpacer(10);

        // Input field and enter button
        const auto inputFont = wxFont(15, wxFONTFAMILY_MODERN, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL);
        auto* inputSizer = new wxBoxSizer(wxHORIZONTAL);
        Input = new wxTextCtrl(LoginPanel, 201, "", wxPoint(0, 0), wxSize(100, 20), wxTE_PASSWORD);
        Input->SetFont(inputFont);
        Enter = new wxButton(LoginPanel, 301, "Enter", wxPoint(0, 0), wxSize(50, 20));
        Enter->SetFont(inputFont);
        inputSizer->AddSpacer(225);
        inputSizer->Add(Input, 3, wxEXPAND, wxUP | wxDOWN | wxLEFT);
        inputSizer->Add(Enter, 1, wxEXPAND, wxUP | wxDOWN | wxRIGHT);
        inputSizer->AddSpacer(225);
        masterSizer->Add(inputSizer, 1, wxEXPAND, wxALL);
        masterSizer->AddSpacer(230);

        LoginPanel->SetSizer(masterSizer);
        masterSizer->Layout();
    }
    else
    {
        CreatorPanel = new wxPanel(this, 1, wxPoint(0, 0),wxSize(800, 600));
        auto* masterSizer = new wxBoxSizer(wxVERTICAL);

        // Big Text
        const auto titleFont = wxFont(35, wxFONTFAMILY_MODERN, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL);
        Text = new wxStaticText(CreatorPanel, 101, "Please enter a secure\nMaster password", wxPoint(0, 0), wxSize(300, 45), wxALIGN_CENTER_HORIZONTAL);
        Text->SetFont( titleFont);
        masterSizer->AddSpacer(200);
        masterSizer->Add(Text, 4, wxEXPAND,  wxALL);
        masterSizer->AddSpacer(10);

        // Input field and enter button
        const auto inputFont = wxFont(15, wxFONTFAMILY_MODERN, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL);
        auto* inputSizer = new wxBoxSizer(wxHORIZONTAL);
        Input = new wxTextCtrl(CreatorPanel, 201, "", wxPoint(0, 0), wxSize(100, 20), wxTE_PASSWORD);
        Input->SetFont(inputFont);
        Enter = new wxButton(CreatorPanel, 302, "Enter", wxPoint(0, 0), wxSize(50, 20));
        Enter->SetFont(inputFont);
        inputSizer->AddSpacer(225);
        inputSizer->Add(Input, 3, wxEXPAND, wxUP | wxDOWN | wxLEFT);
        inputSizer->Add(Enter, 1, wxEXPAND, wxUP | wxDOWN | wxRIGHT);
        inputSizer->AddSpacer(225);
        masterSizer->Add(inputSizer, 1, wxEXPAND, wxALL);
        masterSizer->AddSpacer(230);

        CreatorPanel->SetSizer(masterSizer);
        masterSizer->Layout();
    }
}

cMain::~cMain()
{
}

void cMain::OnLogin(wxCommandEvent& event)
{
    
    delete LoginPanel;
    MainUiPanel = new wxPanel(this, 3, wxPoint(0, 0), wxSize(800, 600));
    
    std::vector<cCredential> lol;
    lol.push_back(cCredential{"LOL", "PASS", "@"});
    
    auto* masterSizer = new wxBoxSizer(wxVERTICAL);
           
    Search = new wxTextCtrl(MainUiPanel, 999, "", wxPoint(0, 0), wxSize(200, 20));
    auto* searchSizer = new wxBoxSizer(wxHORIZONTAL);
    searchSizer->AddSpacer(200);
    searchSizer->Add(Search, 1, wxEXPAND, wxALL);
    searchSizer->AddSpacer(200);
    masterSizer->Add(searchSizer, 1, wxEXPAND, wxDOWN);

    Credentials = new wxListBox(MainUiPanel, 1000);
    for(auto cred : lol)
    {
        Credentials->Append(cred.App + " - " + cred.Password + " - " + cred.EMail);
    }
    masterSizer->Add(Credentials, 1, wxEXPAND, wxALL);

    Add = new wxButton(MainUiPanel, 303, "+", wxDefaultPosition, wxSize(600, 50));
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
