#pragma once
#include "wx/wx.h"
#include "MainUI/cMainUI.h"
#include "CreateLogin/cCreator.h"
#include "Login/cLogin.h"

class cMain : public wxFrame
{
public:
    cMain();
    ~cMain();

	void OnLogin(wxCommandEvent& event);
    void OnCreation(wxCommandEvent& event);

public:
	// Panels
	wxPanel* CreatorPanel;
	wxPanel* LoginPanel;
	wxPanel* MainUiPanel;

	// Objects
	wxStaticText* Text;
	wxTextCtrl* Input;
	wxButton* Enter;

	wxTextCtrl* Search;
	wxListBox* Credentials;
	wxButton* Add;


	// Credentials
	std::vector<std::string> creds;
	
	wxDECLARE_EVENT_TABLE();
};
