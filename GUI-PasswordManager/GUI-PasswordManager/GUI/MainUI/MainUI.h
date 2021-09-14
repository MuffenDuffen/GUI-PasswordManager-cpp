#pragma once
#include "wx/wx.h"
#include "../../cCredential.h"

class cMainUiPanel : public wxPanel
{
public:
    cMainUiPanel(wxWindow* parent, std::vector<cCredential> creds);

    wxTextCtrl* Search;
    wxListBox* Credentials;
    wxButton* Add;
};
