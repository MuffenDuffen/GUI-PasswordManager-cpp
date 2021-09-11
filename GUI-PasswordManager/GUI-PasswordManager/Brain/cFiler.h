#pragma once
#include <string>
#include <vector>
#include "../cProfile.h"

class cFiler
{
public:
    explicit cFiler(std::string filename);
    void Save(std::string filename, cProfile& profile);

public:
    bool New = false;
    std::vector<std::string> File;
};
