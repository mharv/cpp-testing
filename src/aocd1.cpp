#include "aocd1.hpp"
#include <string>
#include <iostream>
#include <sstream> // Include the <sstream> header for std::istringstream

using namespace aocd1;

const char *example = R"(1abc2
pqr3stu8vwx
a1b2c3d4e5f
treb7uchet)";

int aocd1::part_one()
{
    std::string input(example);
    std::istringstream iss(input); // Create a std::istringstream object

    for (std::string line; std::getline(iss, line);)
    {
        std::cout << line.length() << std::endl;
        std::cout << line << std::endl;
    }

    return 0;
}