#include "Encryptor.h"

void Encryptor::next_char(std::string& input)
{
    for (auto& c : input) c += 1;
}

void Encryptor::invert_bits(std::string input)
{
    for (auto& c : input) c = ~c;
}
