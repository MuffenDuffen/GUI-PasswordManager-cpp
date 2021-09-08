#include "cFiler.h"
#include <fstream>

cFiler::cFiler(std::string filename = "data")
{
    std::fstream file = std::fstream(filename.c_str(), std::ios::in);
    std::string line;
    while(std::getline(file, line))
    {
        File.push_back(line);
    }
}

void cFiler::PushToFile()
{
    
}
