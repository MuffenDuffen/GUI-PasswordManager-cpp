#pragma once

#include "wx/wx.h"

class cCreator
{
public:
    cCreator(wxWindow* parent);

    wxStaticText* Text;
    wxTextCtrl* Input;
    wxButton* Enter;
};
