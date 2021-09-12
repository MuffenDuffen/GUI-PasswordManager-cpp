#pragma once

#include "wx/wx.h"

class cLogin
{
public:
    cLogin(wxWindow* parent);
public:
    wxStaticText* Text;
    wxTextCtrl* Input;
    wxButton* Enter;
};
