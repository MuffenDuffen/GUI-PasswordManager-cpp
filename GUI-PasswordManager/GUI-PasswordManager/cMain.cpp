#include "cMain.h"

cMain::cMain() : wxFrame(nullptr, 0, "Password Manager", wxDefaultPosition,  wxSize(800, 600))
{
    auto* masterSizer = new wxBoxSizer(wxVERTICAL);
    masterSizer->AddSpacer(100);

    const auto font = wxFont(45, wxFONTFAMILY_MODERN, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL);
    
    text = new wxStaticText(this, 0, "Password Manager", wxPoint(0, 0), wxSize(300, 50), wxALIGN_CENTER_HORIZONTAL);
    text->SetFont(font);
    masterSizer->Add(text, 1, wxEXPAND,  wxALL);

    this->SetSizer(masterSizer);
    masterSizer->Layout();
}

cMain::~cMain()
{
    
}