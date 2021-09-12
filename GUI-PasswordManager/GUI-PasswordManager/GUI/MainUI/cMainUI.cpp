#include "cMainUI.h"

cMainUI::cMainUI(wxWindow* parent, std::vector<cCredential>& creds)
{
    auto* masterSizer = new wxBoxSizer(wxVERTICAL);
    
    Search = new wxTextCtrl(parent, 999, "", wxPoint(0, 0), wxSize(200, 20));
    auto* searchSizer = new wxBoxSizer(wxHORIZONTAL);
    searchSizer->AddSpacer(200);
    searchSizer->Add(Search, 1, wxEXPAND, wxALL);
    searchSizer->AddSpacer(200);
    masterSizer->Add(searchSizer, 1, wxEXPAND, wxDOWN);

    Credentials = new wxListBox(parent, 1000);
    for(auto cred : creds)
    {
        Credentials->Append(cred.App + " - " + cred.Password + " - " + cred.EMail);
    }
    masterSizer->Add(Credentials, 1, wxEXPAND, wxALL);

    Add = new wxButton(parent, 303, "+", wxDefaultPosition, wxSize(600, 50));
    Add->SetFont(wxFont(30, wxFONTFAMILY_TELETYPE, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL));
    masterSizer->Add(Add, 1, wxEXPAND);

    parent->SetSizer(masterSizer);
    masterSizer->Layout();
}
