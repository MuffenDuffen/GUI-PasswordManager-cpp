#pragma once
#include "wx/wx.h"
#include "cLogin.h"
#include "../Brain/cFiler.h"

class cMain : public wxFrame
{
public:
    cMain();
    ~cMain();

	void OnEnter(wxCommandEvent& event);
	
public:
	cLogin* Login;
	cFiler* Filer;

	wxDECLARE_EVENT_TABLE();
};
