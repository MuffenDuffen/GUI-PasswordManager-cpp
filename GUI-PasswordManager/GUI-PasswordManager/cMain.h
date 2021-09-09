#pragma once
#include "wx/wx.h"

class cMain : public wxFrame
{
public:
    cMain();
    ~cMain();

	void OnEnter(wxCommandEvent& event);
	
public:
	wxStaticText* Text;
	wxTextCtrl* Input;
	wxButton* Enter;

	wxDECLARE_EVENT_TABLE();
};
