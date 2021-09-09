#include "cMain.h"

wxBEGIN_EVENT_TABLE(cMain, wxFrame)
EVT_BUTTON(3, cMain::OnEnter)
wxEND_EVENT_TABLE()

cMain::cMain() : wxFrame(nullptr, 0, "Password Manager", wxDefaultPosition,  wxSize(800, 600))
{
    auto* masterSizer = new wxBoxSizer(wxVERTICAL);
    // Big text on startup
    const auto titleFont = wxFont(45, wxFONTFAMILY_MODERN, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL);
    Text = new wxStaticText(this, 1, "Password Manager", wxPoint(0, 0), wxSize(300, 45), wxALIGN_CENTER_HORIZONTAL);
    Text->SetFont( titleFont);
    masterSizer->AddSpacer(200);
    masterSizer->Add(Text, 4, wxEXPAND,  wxALL);
    masterSizer->AddSpacer(10);

    // Input for password and button for entering
    const auto inputFont = wxFont(15, wxFONTFAMILY_MODERN, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL);
    auto* inputSizer = new wxBoxSizer(wxHORIZONTAL);
    Input = new wxTextCtrl(this, 2, "", wxPoint(0, 0), wxSize(100, 20), wxTE_PASSWORD);
    Input->SetFont(inputFont);
    Enter = new wxButton(this, 3, "Enter", wxPoint(0, 0), wxSize(50, 20));
    Enter->SetFont(inputFont);
    inputSizer->AddSpacer(225);
    inputSizer->Add(Input, 3, wxEXPAND, wxUP | wxDOWN | wxLEFT);
    inputSizer->Add(Enter, 1, wxEXPAND, wxUP | wxDOWN | wxRIGHT);
    inputSizer->AddSpacer(225);
    masterSizer->Add(inputSizer, 1, wxEXPAND, wxALL);
    masterSizer->AddSpacer(230);

    this->SetSizer(masterSizer);
    masterSizer->Layout();
}

cMain::~cMain()
{
    
}

void cMain::OnEnter(wxCommandEvent& event)
{
    Enter->SetLabel(Input->GetValue());
    event.Skip();
}
