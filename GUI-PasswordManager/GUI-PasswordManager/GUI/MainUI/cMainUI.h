#pragma once

#include "wx/wx.h"
#include "../../cCredential.h"

class cMainUI
{
public:
    cMainUI(wxWindow* parent, std::vector<cCredential>& creds);

    wxTextCtrl* Search;
    wxListBox* Credentials;
    wxButton* Add;
};
