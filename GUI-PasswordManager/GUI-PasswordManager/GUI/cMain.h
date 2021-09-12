#pragma once
#include "wx/wx.h"
#include "cLogin.h"
#include "cCreator.h"

class cMain : public wxFrame
{
public:
    cMain();
    ~cMain();

	void OnLogin(wxCommandEvent& event);
    void OnCreation(wxCommandEvent& event);

public:
	// LOGIN-CREATOR
	wxPanel* Creator;
	wxPanel* Login;
	wxStaticText* Text;
    wxTextCtrl* Input;
    wxButton* Enter;

	// MAIN UI
	
	
	wxDECLARE_EVENT_TABLE();
};
