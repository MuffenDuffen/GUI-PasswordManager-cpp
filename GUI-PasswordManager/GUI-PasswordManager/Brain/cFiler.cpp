#include "cFiler.h"
#include <fstream>
#include "../Brain/Encryptor/Encryptor.h"
#include "../Brain/sha256.h"

cFiler::cFiler(const std::string filename)
{
    std::ifstream file;
    file.open(filename.c_str());

    if(file.is_open())
    {
        std::string line;
        while(std::getline(file, line)) File.push_back(line);
    }
    else
    {
        New = true;
        std::ofstream newFile(filename.c_str());
    }
}

void cFiler::Save(std::string filename, cProfile& profile)
{
    std::string file;
    file.reserve(profile.Credentials.size() * profile.MasterPassword.length() + 64);
    picosha2::hash256(cEncryptor::Encrypt(profile.MasterPassword), file);
    
    for(auto& cred : profile.Credentials)
    {
        file += '\n' + cEncryptor::Encrypt(cred.App) + '\n' + cEncryptor::Encrypt(cred.Password) + '\n' + cEncryptor::Encrypt(cred.EMail);
    }
    
    std::fstream fs(filename.c_str(), std::ios::out);
    if(fs.is_open())
    {
        fs << file;
    }
}