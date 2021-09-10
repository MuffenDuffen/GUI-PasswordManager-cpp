#include "cFiler.h"
#include <fstream>

cFiler::cFiler(const std::string filename)
{
    std::ifstream file;
    file.open(filename.c_str());

    if(!file.is_open())
    {
        New = true;
        std::ofstream newFile(filename.c_str());
    }
}
