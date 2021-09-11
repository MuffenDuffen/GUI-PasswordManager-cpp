#pragma once
#include <string>

class Encryptor
{
public:
    void Encrypt(std::string& to_be_encrypted);
private:
    static void NextChar(std::string& input);
    static void InvertBits(std::string& input);
    
};
