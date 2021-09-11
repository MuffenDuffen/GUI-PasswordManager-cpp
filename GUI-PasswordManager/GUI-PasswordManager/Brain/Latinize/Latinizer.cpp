#include "Latinizer.h"

#include <array>
#include <map>

void NumberToLatin(std::string& number)
        {
            std::map<char, std::string> ones
            {
                {'1', "Unos"},
                {'2', "Duo"},
                {'3', "Tres"},
                {'4', "Quattuor"},
                {'5', "Quinque"},
                {'6', "Sex"},
                {'7', "Septem"},
                {'8', "Octo"},
                {'9', "Novem"}
            };
            std::map<char, std::string> tens
            {
                {'1', "Decem"},
                {'2', "Viginti"},
                {'3', "Traginta"},
                {'4', "Quadraginta"},
                {'5', "Quinquaginta"},
                {'6', "Sexaginta"},
                {'7', "Septuaginta"},
                {'8', "Octoginta"},
                {'9', "Nonaginta"}
            };
            std::map<char, std::string> hundreds
            {
                {'1', "Centum"},
                {'2', "Ducenti"},
                {'3', "Trecenti"},
                {'4', "Quadrigenti"},
                {'5', "Quingenti"},
                {'6', "Sescenti"},
                {'7', "Septigenti"},
                {'8', "Octingenti"},
                {'9', "Nongenti"}
            };
            std::map<char, std::string> thousands
            {
                {'1', "Mille"},
                {'2', "Duo Mille"},
                {'3', "Tres Mille"},
                {'4', "Quattuor Mille"},
                {'5', "Quinque Milia"},
                {'6', "Sex Milia"},
                {'7', "Septem Milia"},
                {'8', "Octo Milia"},
                {'9', "Novem Milia"},
            };
            std::map<char, std::string> tenthousands
            {
               {'1', "Decem Milia"},
                {'2', "Viginti Milia"},
                {'3', "Triginta Milia"},
                {'4', "Quadraginta Milia"},
                {'5', "Quinquaginta Milia"},
                {'6', "Sexaginta Milia"}
            };
            const std::array<std::map<char, std::string>, 5> dictionaries = {tenthousands, thousands, hundreds, tens, ones};

            while (number.length() < 5) number.insert(0, 1, '0');
            
            for (int i = 0; i < number.length(); i++)
            {
                
                if (number[i] != '0')
                {
                    number += dictionaries[i].at(number[i]) + ",";
                }
            }
        }

std::string Latinizer::StringToLatin(std::string& string)
{
    for (char c : string)
    {
        string += Latinizer::NumberToLatin(&c);
    }
    return "LEL";
}
