#include "cMain.h"

#include "Brain/Encryptor/LatinizeLOL/LatinizeLOLEncryptor.h"

wxBEGIN_EVENT_TABLE(cMain, wxFrame)
    EVT_TEXT_ENTER(2, OnPassEnter)
wxEND_EVENT_TABLE()

cMain::cMain() : wxFrame(nullptr, 0, "Password Manager", wxDefaultPosition,  wxSize(800, 600))
{
    // Filer
    //Filer = new cFiler("data");

    // Window
    auto* masterSizer = new wxBoxSizer(wxVERTICAL);

    // Big text on startup
    const auto titleFont = wxFont(45, wxFONTFAMILY_MODERN, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL);
    Text = new wxStaticText(this, 1, "Password Manager", wxPoint(0, 0), wxSize(300, 45), wxALIGN_CENTER_HORIZONTAL);
    Text->SetFont( titleFont);
    masterSizer->AddSpacer(200);
    masterSizer->Add(Text, 4, wxEXPAND,  wxALL);
    masterSizer->AddSpacer(10);

    // Input field
    const auto inputFont = wxFont(15, wxFONTFAMILY_MODERN, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL);
    auto* inputSizer = new wxBoxSizer(wxHORIZONTAL);
    Input = new wxTextCtrl(this, 2, "", wxPoint(0, 0), wxSize(100, 20), wxTE_PASSWORD);
    Input->SetExtraStyle(wxTE_PROCESS_ENTER);
    Input->SetFont(inputFont);
    inputSizer->AddSpacer(300);
    inputSizer->Add(Input, 1, wxEXPAND, wxALL);
    inputSizer->AddSpacer(300);
    masterSizer->Add(inputSizer, 1, wxEXPAND, wxALL);
    masterSizer->AddSpacer(230);

    this->SetSizer(masterSizer);
    masterSizer->Layout();
}

cMain::~cMain()
{
    
}

void cMain::OnPassEnter(wxCommandEvent& event)
{
    // Encrypt and hash

    std::string encryptedPassword = LatinizeLOLEncryptor::convert_number_to_latin("123");

    std::cout << encryptedPassword << std::endl;
    
    event.Skip();
}

