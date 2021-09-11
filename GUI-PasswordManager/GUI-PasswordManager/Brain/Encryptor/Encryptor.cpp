#include "Encryptor.h"

void cEncryptor::Encrypt(std::string& to_be_encrypted)
{
    const std::string lel = "lel";

    std::string outputString = StringToLatin(lel);
}

void cEncryptor::NextChar(std::string& input)
{
    for (auto& c : input) c += 1;
}

void cEncryptor::InvertBits(std::string& input)
{
    for (auto& c : input) c = ~c;
}

