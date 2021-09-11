#include "Encryptor.h"

std::string cEncryptor::Encrypt(std::string& to_be_encrypted)
{
    const std::string lel = "lel";

    std::string result = "";

    const std::string outputString = StringToLatin(lel);

    result = outputString;
    
    return result;
}

void cEncryptor::NextChar(std::string& input)
{
    for (auto& c : input) c += 1;
}

void cEncryptor::InvertBits(std::string& input)
{
    for (auto& c : input) c = ~c;
}

