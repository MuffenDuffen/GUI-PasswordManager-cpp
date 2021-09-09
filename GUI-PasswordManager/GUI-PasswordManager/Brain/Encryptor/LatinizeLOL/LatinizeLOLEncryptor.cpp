#include "LatinizeLOLEncryptor.h"

#include <map>

std::string LatinizeLOLEncryptor::convert_number_to_latin(const std::string& number_in_string)
{
    auto numbers_in_latin = std::map<std::string, std::string>
    {
        {"1s", "Unos"},
        {"2s", "Duo"},
        {"3s", "Tres"},
        {"4s", "Quattuor"},
        {"5s", "Quinque"},
        {"6s", "Sex"},
        {"7s", "Septem"},
        {"8s", "Octo"},
        {"9s", "Novem"},

        {"1tenth", "Decem"},
        {"2tenth", "Viginti"},
        {"3tenth", "Triginta"},
        {"4tenth", "Quadraginta"},
        {"5tenth", "Quinquaginta"},
        {"6tenth", "Sexaginta"},
        {"7tenth", "Septuaginta"},
        {"8tenth", "Octoginta"},
        {"9tenth", "Nonaginta"},

        {"1hundredth", "Centum"},
        {"2hundredth", "Ducenti"},
        {"3hundredth", "Trecenti"},
        {"4hundredth", "Quadrigenti"},
        {"5hundredth", "Quingenti"},
        {"6hundredth", "Sescenti"},
        {"7hundredth", "Septingenti"},
        {"8hundredth", "Octingenti"},
        {"9hundredth", "Nongenti"},

        {"1thousandth", "Mille"},
        {"2thousandth", "Duo Mille"},
        {"3thousandth", "Tres Mille"},
        {"4thousandth", "Quattuor Mille"},
        {"5thousandth", "Quinque Milia"},
        {"6thousandth", "Sex Milia"},
        {"7thousandth", "Septem Milia"},
        {"8thousandth", "Octo Milia"},
        {"9thousandth", "Novem Milia"},

        {"1tenthousandth", "Decem Milia"},
        {"2tenthousandth", "Viginti Milia"},
        {"3tenthousandth", "triginta Milia"},
        {"4tenthousandth", "Quadraginta Milia"},
        {"5tenthousandth", "Quinquaginta Milia"},
        {"6tenthousandth", "Sexaginta Milia"},
        {"7tenthousandth", "Septuaginta Milia"},
        {"8tenthousandth", "Octoginta Milia"},
        {"9tenthousandth", "Nonaginta Milia"},

        {"1hundredthousandth", "Centum Milia"},
        {"2hundredthousandth", "Ducenti Milia"},
        {"3hundredthousandth", "Trecenta Millia"},
        {"4hundredthousandth", "Quadrigenti Milia"},
        {"5hundredthousandth", "Quingenta Milia"},
        {"6hundredthousandth", "Sescenti Milia"},
        {"7hundredthousandth", "Septigenti Milia"},
        {"8hundredthousandth", "Octingenti Milia"},
        {"9hundredthousandth", "Nongenti Milia"},

        {"1million", "Deciec centena milia"}
    };
    auto indexInNumber = number_in_string.length();
    
    std::string stringOfNumberInLatin = "";

    if (indexInNumber == 1 && number_in_string[0] == '0') return "Nihil";

    for (auto c : number_in_string)
    {
        auto c_str = std::string(&c);
        
        std::string altered_string = "";

        if (c == '0')
        {
            indexInNumber--;
            continue;
        }

        switch (indexInNumber)
        {
        case 1:
            {
                altered_string += c_str + 's';
                break;
            }
        case 2:
            {
                altered_string += c_str + "tenth";
                break;
            }
        case 3:
            {
                altered_string += c_str + "hundredth";
                break;
            }
        case 4:
            {
                altered_string += c_str + "thousandth";
                break;
            }
        case 5:
            {
                altered_string += c_str + "tenthousandth";
                break;
            }
        case 6:
            {
                altered_string += c_str + "hundredthousandth";
                break;
            }
        case 7:
            {
                if (c == 1)
                {
                    altered_string += c_str + "million";
                }
                else if (c != 1)
                {
                    return "Error 1: To high of a number, cant exceed 1999999";
                }
            }
            break;
        default: ;
        }

        stringOfNumberInLatin += numbers_in_latin.at(altered_string) + ",";
    }
    
    return stringOfNumberInLatin;
}
