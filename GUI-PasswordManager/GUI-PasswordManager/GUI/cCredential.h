#pragma once

#include "wx/wx.h"

class cCredential : public wxPanel
{
public:
    wxTextCtrl* App;
    wxTextCtrl* Password;
    wxTextCtrl* EMail;

    cCredential(wxWindow* parent, int id, std::string& app, std::string& password, std::string& email);
};
