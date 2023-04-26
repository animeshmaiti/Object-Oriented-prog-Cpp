/*
* C++ program to demonstrate try and catch block 
* the program must throw exception when we try to divide by zero
*/

#include <iostream>

int main()
{
    std::cout << "Enter two numbers: ";
    int num1, num2;
    std::cin >> num1 >> num2;

    // include try and catch block 
    try
    {
        if (num2 != 0)
        {
            float res = (float)num1 / num2;
            std::cout << "Result: " << res << std::endl;
        }
        else
            throw(num2); // exception thrown
    }
    catch (int num2) // exception caught
    {
        std::cout << "Error: divide by zero encountered." << std::endl;
        return 0;
    }
    return 0;
}
