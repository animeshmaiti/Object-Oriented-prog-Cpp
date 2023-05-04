// Write a C++ program that reads 5 hexadecimal numbers from a file, converts each hexadecimal
// number into an equivalent binary number, writes each binary representation into a file.
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string hexNum;
    ifstream inFile("input.txt"); // assuming input.txt has the 5 hexadecimal numbers
    ofstream outFile("output.txt");

    while (inFile >> hexNum)
    {
        // convert hexNum to binary and write to outFile
        int len = hexNum.length();
        string binNum = "";
        for (int i = 0; i < len; i++)
        {
            switch (hexNum[i])
            {
            case '0':
                binNum += "0000";
                break;
            case '1':
                binNum += "0001";
                break;
            case '2':
                binNum += "0010";
                break;
            case '3':
                binNum += "0011";
                break;
            case '4':
                binNum += "0100";
                break;
            case '5':
                binNum += "0101";
                break;
            case '6':
                binNum += "0110";
                break;
            case '7':
                binNum += "0111";
                break;
            case '8':
                binNum += "1000";
                break;
            case '9':
                binNum += "1001";
                break;
            case 'A':
                binNum += "1010";
                break;
            case 'B':
                binNum += "1011";
                break;
            case 'C':
                binNum += "1100";
                break;
            case 'D':
                binNum += "1101";
                break;
            case 'E':
                binNum += "1110";
                break;
            case 'F':
                binNum += "1111";
                break;
            }
        }
        outFile << binNum << endl;
    }

    inFile.close();
    outFile.close();

    return 0;
}
