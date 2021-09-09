#pragma once
#include "wx/wx.h"
#include "cLogin.h"

class cMain : public wxFrame
{
public:
    cMain();
    ~cMain();

	void OnEnter(wxCommandEvent& event);
	
public:
	cLogin* Login;
	// wxStaticText* Text;
	// wxTextCtrl* Input;
	// wxButton* Enter;

	wxDECLARE_EVENT_TABLE();
};
