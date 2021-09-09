#pragma once
#include <string>

class Encryptor
{
public:
    static void next_char(std::string& input);
    static void invert_bits(std::string input);

    class Latinizer
    {
    public:
        static std::string convert_number_to_latin(const std::string& number_string);
    };
};
