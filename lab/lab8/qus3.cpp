/*
* C++ program to demonstrate try and catch block
* The program must throw an exception 
* if the file to be read is missing
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string str1;

    // opening a file for reading
    ifstream infile("sample.txt");

    // checking whether the file is open or not
    try {
        if (infile)
        {
            // opening a file for writing
            ofstream outfile("out.txt");

            // read every line in a file
            while (getline(infile, str1))
            {
                outfile << str1 << endl;
            }
        }
        else
            throw("Read file does not exist!");
    }
    catch (const char* msg) {
        cout << msg << endl;
    }
    return 0;
}
