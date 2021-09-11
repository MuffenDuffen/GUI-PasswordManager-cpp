#include "Encryptor.h"

void cEncryptor::Encrypt(std::string& to_be_encrypted)
{
    
}

void cEncryptor::NextChar(std::string& input)
{
    for (auto& c : input) c += 1;
}

void cEncryptor::InvertBits(std::string& input)
{
    for (auto& c : input) c = ~c;
}

