#include "CreateLoginPanel.h"

cCreateLoginPanel::cCreateLoginPanel(wxWindow* parent) : wxPanel(parent, 1)
{
    auto* masterSizer = new wxBoxSizer(wxVERTICAL);

    // Big Text
    const auto titleFont = wxFont(35, wxFONTFAMILY_MODERN, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL);
    Text = new wxStaticText(this, 101, "Please enter a secure\nMaster password", wxPoint(0, 0), wxSize(300, 45), wxALIGN_CENTER_HORIZONTAL);
    Text->SetFont( titleFont);
    masterSizer->AddSpacer(200);
    masterSizer->Add(Text, 4, wxEXPAND,  wxALL);
    masterSizer->AddSpacer(10);

    // Input field and enter button
    const auto inputFont = wxFont(15, wxFONTFAMILY_MODERN, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL);
    auto* inputSizer = new wxBoxSizer(wxHORIZONTAL);
    Input = new wxTextCtrl(this, 201, "", wxPoint(0, 0), wxSize(100, 20), wxTE_PASSWORD);
    Input->SetFont(inputFont);
    Enter = new wxButton(this, 302, "Enter", wxPoint(0, 0), wxSize(50, 20));
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