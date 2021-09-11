#pragma once
#include <string>

class cEncryptor
{
public:
    static void Encrypt(std::string& to_be_encrypted);
private:
    static void NextChar(std::string& input);
    static void InvertBits(std::string& input);
    
    static std::string NumberToLatin(std::string& number);
    static std::string StringToLatin(const std::string& string);
    
};
