#pragma once
#include "wx/wx.h"
#include "cLogin.h"
#include "cCreator.h"
#include "../Brain/cFiler.h"
#include "../cProfile.h"

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
	cFiler* Filer;
	cProfile* Profile;

	wxDECLARE_EVENT_TABLE();
};
