#include "Encryptor.h"

#include <map>
#include <vector>

void Encryptor::next_char(std::string& input)
{
    for (auto& c : input) c += 1;
}

void Encryptor::invert_bits(std::string input)
{
    for (auto& c : input) c = ~c;
}

std::string convert_number_to_latin(std::string& number_string) {

    const std::map<std::string, std::string> ones
    {
        {"1", "Unos"},
        {"2", "Duo"},
        {"3", "Tres"},
        {"4", "Quattuor"},
        {"5", "Quinque"},
        {"6", "Sex"},
        {"7", "Septem"},
        {"8", "Octo"},
        {"9", "Novem"}
    };
    const std::map<std::string, std::string> tens
    {
        {"1", "Decem"},
        {"2", "Viginti"},
        {"3", "Traginta"},
        {"4", "Quadraginta"},
        {"5", "Quinquaginta"},
        {"6", "Sexaginta"},
        {"7", "Septuaginta"},
        {"8", "Octoginta"},
        {"9", "Nonaginta"}
    };
    const std::map<std::string, std::string> hundreds
    {
        {"1", "Centum"},
        {"2", "Ducenti"},
        {"3", "Trecenti"},
        {"4", "Quadrigenti"},
        {"5", "Quingenti"},
        {"6", "Sescenti"},
        {"7", "Septigenti"},
        {"8", "Octingenti"},
        {"9", "Nongenti"}
    };
    const std::map<std::string, std::string> thousands
    {
        {"1", "Mille"},
        {"2", "Duo Mille"},
        {"3", "Tres Mille"},
        {"4", "Quattuor Mille"},
        {"5", "Quinque Milia"},
        {"6", "Sex Milia"},
        {"7", "Septem Milia"},
        {"8", "Octo Milia"},
        {"9", "Novem Milia"},
    };
    const std::map<std::string, std::string> tenthousands
    {
        {"1", "Decem Milia"},
        {"2", "Duo Milia"},
        {"3", "Tres Milia"},
        {"4", "Quattuor Milia"},
        {"5", "Quinquaginta Milia"},
        {"6", "Sex Milia"},
        {"7", "Septem Milia"},
        {"8", "Octo Milia"},
        {"9", "Nonaginta Milia"},
    };
    const std::map<std::string, std::string> hundredthousands
    {
        {"1", "Centum Milia"},
        {"2", "Ducenti Milia"},
        {"3", "Trecenta Millia"},
        {"4", "Quadrigenti Milia"},
        {"5", "Quingenta Milia"},
        {"6", "Sescenti Milia"},
        {"7", "Septigenti Milia"},
        {"8", "Octingenti Milia"},
        {"9", "Nongenti Milia"},
    };

    std::vector<std::map<std::string, std::string>> dictionaries;

    dictionaries.insert(dictionaries.end(), hundredthousands);
    dictionaries.insert(dictionaries.end(), tenthousands);
    dictionaries.insert(dictionaries.end(), thousands);
    dictionaries.insert(dictionaries.end(), hundreds);
    dictionaries.insert(dictionaries.end(), tens);
    dictionaries.insert(dictionaries.end(), ones);
    
    std::string latin = "";
    
    for (auto i = 0; i < number_string.length(); i++)
    {
        auto c_str = std::string(&number_string[i]);
        
        if (number_string[i] != '0')
        {
            latin += dictionaries[i].at(c_str) + ",";
        }
    }
    return latin;
}
