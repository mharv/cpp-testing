#include <iostream>
#include <string>
#include <vector>
// print function that takes a generic type and prints it

using namespace std;
template <typename T>

void print(T value)
{
    cout << value << "\n";
}

int main()
{
    int a = 4;
    double b = 3.0;
    char c[] = "hello";
    short test = 0b010101; // 21
    short test1 = 123123;
    cout << a << " " << b << " " << c << "\n";
    cout << test << "\n";
    cout << test1 << "\n";

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

    return 0;
}
