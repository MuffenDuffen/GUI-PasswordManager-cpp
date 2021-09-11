#include "Encryptor.h"

void Encryptor::Encrypt(std::string& to_be_encrypted)
{
    
}

void Encryptor::NextChar(std::string& input)
{
    for (auto& c : input) c += 1;
}

void Encryptor::InvertBits(std::string& input)
{
    for (auto& c : input) c = ~c;
}

