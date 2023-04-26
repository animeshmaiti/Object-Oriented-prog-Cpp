/*
* C++ program to demonstrate try and catch block
* the program must throw exception when we exceed the vector index
*/

#include <iostream>
#include <vector>

int main()
{
    std::vector<int> num = { 1, 2, 3, 4, 5 };
    int sum = 0;

    // include try and catch block 
    try
    {
        for (unsigned int i = 0; i <= num.size(); i++)
            if (i < num.size())
                sum += num[i];
            else
                throw("Index out of range!");
    }
    catch (const char* err) // exception caught
    {
        std::cout << err;
    }
    std::cout << std::endl;
    std::cout << "Sum: " << sum << std::endl;
    return 0;
}
