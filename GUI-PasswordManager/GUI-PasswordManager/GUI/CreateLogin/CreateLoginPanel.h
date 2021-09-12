#pragma once
#include <wx/wx.h>

class cCreateLoginPanel : wxPanel
{
public:
    cCreateLoginPanel(wxWindow* parent);

    wxStaticText* Text;
    wxTextCtrl* Input;
    wxButton* Enter;
};
