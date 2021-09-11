#pragma once
#include <string>
#include <vector>
#include "cCredential.h"

class cProfile
{
public:
   std::string MasterPassword;
   std::vector<cCredential> Credentials;
};
