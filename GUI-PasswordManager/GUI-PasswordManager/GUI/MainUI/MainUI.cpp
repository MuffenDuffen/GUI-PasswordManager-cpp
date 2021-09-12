#include "MainUI.h"

cMainUiPanel::cMainUiPanel(wxWindow* parent, std::vector<cCredential> creds) : wxPanel(parent, 3)
{
    auto* masterSizer = new wxBoxSizer(wxVERTICAL);
           
    Search = new wxTextCtrl(this, 999, "", wxPoint(0, 0), wxSize(200, 20));
    auto* searchSizer = new wxBoxSizer(wxHORIZONTAL);
    searchSizer->AddSpacer(200);
    searchSizer->Add(Search, 1, wxEXPAND, wxALL);
    searchSizer->AddSpacer(200);
    masterSizer->Add(searchSizer, 1, wxEXPAND, wxDOWN);

    Credentials = new wxListBox(this, 1000);
    for(auto cred : creds)
    {
        Credentials->Append(cred.App + " - " + cred.Password + " - " + cred.EMail);
    }
    masterSizer->Add(Credentials, 1, wxEXPAND, wxALL);

    Add = new wxButton(this, 303, "+", wxDefaultPosition, wxSize(600, 50));
    Add->SetFont(wxFont(30, wxFONTFAMILY_TELETYPE, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL));
    masterSizer->Add(Add, 1, wxEXPAND);

    this->SetSizer(masterSizer);
    this->Layout();
    masterSizer->Layout();
}
