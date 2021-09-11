#include "cApp.h"

wxIMPLEMENT_APP(cApp);

bool cApp::OnInit()
{
    _frame1 = new cMain();
    _frame1->Show();
    return true;
}