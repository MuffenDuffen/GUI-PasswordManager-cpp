#pragma once
#include "wx/wx.h"
#include "cCredential.h"
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
	// LOGIN-CREATOR
	wxPanel* Creator;
	wxPanel* Login;
	
	cCreator* CreatorObject;
	cLogin* LoginObject;

	// MAIN UI
	wxTextCtrl* Search;
	cCredential** Credentials;
	wxButton* Add;
	
	wxDECLARE_EVENT_TABLE();
};
