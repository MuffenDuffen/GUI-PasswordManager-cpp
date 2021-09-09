#pragma once

#include "wx/wx.h"
#include "GUI/cMain.h"

class cApp : public wxApp
{
private:
    cMain* m_frame1 = nullptr;

public:
    bool OnInit() override;
};

