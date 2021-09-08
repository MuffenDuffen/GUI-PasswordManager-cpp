#pragma once
#include <string>
#include <vector>

class cFiler
{
public:
   explicit cFiler(std::string filename);
   void PushToFile();
   
   std::vector<std::string> File;
};
