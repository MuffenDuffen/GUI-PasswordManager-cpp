#pragma once

#include "wx/wx.h"

class cLoginPanel : wxPanel
{
public:
    cLoginPanel(wxWindow* parent);

    wxStaticText* Text;
    wxTextCtrl* Input;
    wxButton* Enter;
};