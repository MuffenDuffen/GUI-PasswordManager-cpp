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
	// LOGIN-CREATOR
	wxPanel* CreatorPanel;
	wxPanel* LoginPanel;
	wxPanel* MainUiPanel;
	
	cCreator* CreatorObject;
	cLogin* LoginObject;
	cMainUI* MainUiObject;
	
	wxDECLARE_EVENT_TABLE();
};
