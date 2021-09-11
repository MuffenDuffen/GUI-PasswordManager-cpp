#pragma once
#include <string>
#include <vector>
#include "cCredential.h"

class cProfile
{
public:
   cProfile(std::vector<std::string>& file);
   
   std::string MasterPassword;
   std::vector<cCredential> Credentials;
};
