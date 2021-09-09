#include "Encryptor.h"

void Encryptor::nextChar(std::string& input)
{
    for (auto& c : input) c += 1;
}
