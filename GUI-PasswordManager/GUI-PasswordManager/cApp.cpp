#include "cApp.h"

bool cApp::OnInit()
{
    m_frame1 = new cMain();
    m_frame1->Show();
    return true;
}