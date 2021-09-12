#include "cMain.h"

#include <fstream>

wxBEGIN_EVENT_TABLE(cMain, wxFrame)
    EVT_BUTTON(300, cMain::OnLogin)
    EVT_BUTTON(301, cMain::OnCreation)
wxEND_EVENT_TABLE()

cMain::cMain() : wxFrame(nullptr, 0, "Password Manager", wxDefaultPosition,  wxSize(800, 600))
{
    std::fstream file;

    file.open("data");

    Login = new wxPanel(this, 2, wxPoint(0, 0),wxSize(800, 600));
    Creator = new wxPanel(this, 1, wxPoint(0, 0),wxSize(800, 600));
    
    
    if (file.is_open())
    {
        delete Creator;
        auto* masterSizer = new wxBoxSizer(wxVERTICAL);

        // Big Text
        const auto titleFont = wxFont(45, wxFONTFAMILY_MODERN, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL);
        Text = new wxStaticText(Login, 100, "Password Manager", wxPoint(0, 0), wxSize(300, 45), wxALIGN_CENTER_HORIZONTAL);
        Text->SetFont( titleFont);
        masterSizer->AddSpacer(200);
        masterSizer->Add(Text, 4, wxEXPAND,  wxALL);
        masterSizer->AddSpacer(10);

        // Input field and enter button
        const auto inputFont = wxFont(15, wxFONTFAMILY_MODERN, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL);
        auto* inputSizer = new wxBoxSizer(wxHORIZONTAL);
        Input = new wxTextCtrl(Login, 200, "", wxPoint(0, 0), wxSize(100, 20), wxTE_PASSWORD);
        Input->SetFont(inputFont);
        Enter = new wxButton(Login, 300, "Enter", wxPoint(0, 0), wxSize(50, 20));
        Enter->SetFont(inputFont);
        inputSizer->AddSpacer(225);
        inputSizer->Add(Input, 3, wxEXPAND, wxUP | wxDOWN | wxLEFT);
        inputSizer->Add(Enter, 1, wxEXPAND, wxUP | wxDOWN | wxRIGHT);
        inputSizer->AddSpacer(225);
        masterSizer->Add(inputSizer, 1, wxEXPAND, wxALL);
        masterSizer->AddSpacer(230);

        Login->SetSizer(masterSizer);
        masterSizer->Layout();
    }
    else
    {
        delete Login;
        auto* masterSizer = new wxBoxSizer(wxVERTICAL);

        // Big Text
        const auto titleFont = wxFont(35, wxFONTFAMILY_MODERN, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL);
        Text = new wxStaticText(Creator, 100, "Please enter a secure\nMaster password", wxPoint(0, 0), wxSize(300, 45), wxALIGN_CENTER_HORIZONTAL);
        Text->SetFont( titleFont);
        masterSizer->AddSpacer(200);
        masterSizer->Add(Text, 4, wxEXPAND,  wxALL);
        masterSizer->AddSpacer(10);

        // Input field and enter button
        const auto inputFont = wxFont(15, wxFONTFAMILY_MODERN, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL);
        auto* inputSizer = new wxBoxSizer(wxHORIZONTAL);
        Input = new wxTextCtrl(Creator, 200, "", wxPoint(0, 0), wxSize(100, 20), wxTE_PASSWORD);
        Input->SetFont(inputFont);
        Enter = new wxButton(Creator, 301, "Enter", wxPoint(0, 0), wxSize(50, 20));
        Enter->SetFont(inputFont);
        inputSizer->AddSpacer(225);
        inputSizer->Add(Input, 3, wxEXPAND, wxUP | wxDOWN | wxLEFT);
        inputSizer->Add(Enter, 1, wxEXPAND, wxUP | wxDOWN | wxRIGHT);
        inputSizer->AddSpacer(225);
        masterSizer->Add(inputSizer, 1, wxEXPAND, wxALL);
        masterSizer->AddSpacer(230);

        Creator->SetSizer(masterSizer);
        masterSizer->Layout();
    }
    
}

cMain::~cMain()
{
}

void cMain::OnLogin(wxCommandEvent& event)
{
    Enter->SetLabel(Input->GetValue());
    event.Skip();
}

void cMain::OnCreation(wxCommandEvent& event)
{
    
    event.Skip();
}
