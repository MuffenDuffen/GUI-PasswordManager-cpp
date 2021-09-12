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
	cLogin* Login;
	cCreator* Creator;

	wxDECLARE_EVENT_TABLE();
};
