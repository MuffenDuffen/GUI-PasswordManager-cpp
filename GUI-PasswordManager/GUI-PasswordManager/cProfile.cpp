#include "cProfile.h"
#include "Brain/Decryptor/Decryptor.h"

cProfile::cProfile(std::vector<std::string>& file)
{
    for(int i = 1; i < file.size(); i+=3)
    {
        Credentials.push_back(cCredential{Decryptor::Decrypt(file[i]), Decryptor::Decrypt(file[i + 1]), Decryptor::Decrypt(file[i + 2])});
    }
}
