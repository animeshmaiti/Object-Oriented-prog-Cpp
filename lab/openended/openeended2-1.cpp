// Q1.Write a C++ program that reads 10 positive integers from a file, converts each integer into
// an equivalent 5-bit binary number, writes each binary representation into a file.

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream input_file("input.txt");
    ofstream output_file("output.txt");

    int num;
    for (int i = 0; i < 10; i++)
    {
        input_file >> num;
        for (int j = 4; j >= 0; j--)//
        {
            int bit = (num >> j) & 1;
            output_file << bit;
        }
        output_file << endl;
    }

    input_file.close();
    output_file.close();
    return 0;
}
