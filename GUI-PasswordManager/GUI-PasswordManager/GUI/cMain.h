#pragma once
#include "CreateLogin/CreateLoginPanel.h"
#include "Login/LoginPanel.h"
#include "MainUI/MainUI.h"
#include "wx/wx.h"

class cMain : public wxFrame
{
public:
    cMain();
    ~cMain();

	void OnLogin(wxCommandEvent& event);
    void OnCreation(wxCommandEvent& event);

public:
	// Panels
	cCreateLoginPanel* CreateLoginPanel;
    cLoginPanel* LoginPanel;
	cMainUiPanel* MainUiPanel;

	wxTextCtrl* Search;
	wxListBox* Credentials;
	wxButton* Add;
	
	wxDECLARE_EVENT_TABLE();
};
