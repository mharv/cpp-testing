#include <iostream>
// import setprecision
#include <iomanip>

int main ()
{
    // initialize a number variable
    int number = 0;
    // initialize a sum variable
    int sum = 0;
    // initialize an array of numbers with random values
    int numbers[5] = {1, 2, 3, 4, 5};
    //loop through the numbers array and multiply each number by 7.5 then add it to the sum variable
    for (int i = 0; i < 5; i++)
    {
        sum += numbers[i] * 7.5;
    }
    // print the sum variable
    std::cout << sum << std::endl;
    // print the sum variable divided by 5
    std::cout << sum / 5 << std::endl;
    // print the sum variable divided by 5.0
    std::cout << sum / 5.0 << std::endl;
    // print the sum variable divided by 5.0 with 2 decimal places
    std::cout << std::fixed << std::setprecision(2) << sum / 5.0 << std::endl;
    // print the sum variable divided by 5.0 with 2 decimal places and a dollar sign
    std::cout << "$" << std::fixed << std::setprecision(2) << sum / 5.0 << std::endl;
    // print the sum variable divided by 5.0 with 2 decimal places and a dollar sign and a space
    std::cout << "$ " << std::fixed << std::setprecision(2) << sum / 5.0 << std::endl;
    // print the sum variable divided by 5.0 with 2 decimal places and a dollar sign and a space and a 0
    std::cout << "$ " << std::fixed << std::setprecision(2) << sum / 5.0 << "0" << std::endl;

    


    return 0;
}
