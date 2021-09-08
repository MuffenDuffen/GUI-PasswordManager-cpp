#pragma once
#include "cFiler.h"
#include "wx/wx.h"

class cMain : public wxFrame
{
public:
    cMain();
    ~cMain() override;

	void OnPassEnter(wxCommandEvent& event);
	
public:
	wxStaticText* Text;
	wxTextCtrl* Input;

	cFiler* Filer;

	wxDECLARE_EVENT_TABLE();
};
