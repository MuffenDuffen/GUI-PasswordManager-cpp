#include "MainUI.h"

cMainUiPanel::cMainUiPanel(wxWindow* parent, std::vector<cCredential> creds) : wxPanel(parent, 3, wxPoint(0, 0), wxSize(800, 600))
{
    auto* masterSizer = new wxBoxSizer(wxVERTICAL);
           
    Search = new wxTextCtrl(this, 999, "", wxPoint(0, 0), wxSize(200, 20));
    auto* searchSizer = new wxBoxSizer(wxHORIZONTAL);
    searchSizer->AddSpacer(200);
    searchSizer->Add(Search, 1, wxEXPAND, wxALL);
    searchSizer->AddSpacer(200);
    masterSizer->Add(searchSizer, 0, wxEXPAND, wxDOWN);

    Credentials = new wxListBox(this, 1000, wxDefaultPosition, wxSize(800, 490));
    for(auto cred : creds)
    {
        Credentials->Append(cred.App + " - " + cred.Password + " - " + cred.EMail);
    }
    masterSizer->Add(Credentials, 0, wxEXPAND, wxALL);

    Add = new wxButton(this, 303, "+", wxPoint(0, 0), wxSize(800, 50));
    Add->SetFont(wxFont(30, wxFONTFAMILY_TELETYPE, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL));
    masterSizer->Add(Add, 0, wxEXPAND,  wxALL);
    this->SetSizer(masterSizer);
    this->Layout();
    masterSizer->Layout();
}
