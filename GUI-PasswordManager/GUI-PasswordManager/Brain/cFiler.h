#pragma once
#include <string>
#include <vector>

class cFiler
{
public:
    explicit cFiler(std::string filename);

public:
    bool New = false;
    std::vector<std::string> File;
};
