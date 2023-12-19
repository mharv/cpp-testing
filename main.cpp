#include <iostream>
#include <string>
#include <vector>
#include <limits>
#include "test.hpp"

using namespace std;
enum class Color
{
    RED,
    BLUE,
    GREEN
};

enum class Animal
{
    HORSE,
    COW,
    DOG,
};
template <typename T>

void print(T value)
{
    cout << value << "\n";
}

// Helper function to convert Color enum to string
const char *colorToString(Color c)
{
    switch (c)
    {
    case Color::RED:
        return "RED";
    case Color::GREEN:
        return "GREEN";
    case Color::BLUE:
        return "BLUE";
    default:
        return "UNKNOWN";
    }
}

struct S1
{
    int b1 : 10; // range [0, 1023]
    int b2 : 10; // range [0, 1023]
    int b3 : 8;  // range [0, 255]
};               // sizeof(S1): 4 bytes
struct S2
{
    int b1 : 10;
    int : 0;     // reset: force the next field
    int b2 : 10; // to start at bit 32
};

int main()
{
    int a = 4;
    double b = 3.0;
    char c[] = "hello";
    short test = 0b010101; // 21
    short test1 = 2048;
    cout << a << " " << b << " " << c << "\n";
    cout << test << "\n";
    cout << test1 << "\n";

    // print maximum number of a short
    cout << std::numeric_limits<short>::max() << "\n";

    auto somethingElse = 9;
    print(test1);
    print(somethingElse);
    // print the type of somethingElse
    cout << typeid(somethingElse).name() << "\n";
    std::string s = "hello";
    std::string types = typeid(s).name();

    std::vector<char> empty_dynamic_array;
    for (int i = 0; i < types.length(); i++)
    {
        // index the string and push back the character
        empty_dynamic_array.push_back(types.at(i));
    }

    // print out the array on one line
    for (int i = 0; i < empty_dynamic_array.size(); i++)
    {
        cout << empty_dynamic_array[i] << " ";
    }

    auto color = Color::BLUE;

    // print color
    cout << "\n"
         << colorToString(color) << "\n";

    auto test3 = false ? Color::GREEN : Color::BLUE;
    cout << colorToString(test3) << "\n";

    cout << sizeof(S1) << "\n";
    cout << sizeof(S2) << "\n";

    for (int i : empty_dynamic_array)
    {
        cout << char(i) << " ";
    }

    cout << "\n";
    cout << Test::get_name() << "\n";
    return 0;
}
