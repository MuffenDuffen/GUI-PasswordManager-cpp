#include "cCredential.h"

cCredential::cCredential(wxWindow* parent, int id, std::string& app, std::string& password, std::string& email) : wxPanel(parent, id, wxPoint(0, 0), wxSize(800, 600), wxBORDER_DEFAULT)
{
    App = new wxTextCtrl(parent, id + 1, app, )
}
