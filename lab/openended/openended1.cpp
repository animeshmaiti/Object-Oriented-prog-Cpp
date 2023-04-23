// https://www.geeksforgeeks.org/vector-in-cpp-stl/
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // create a vector of integers
    vector<int> v = {10, 20, 30, 40, 50};
    vector<int> v1;

    // display the elements of the vector
    cout << "Original vector: ";
    // here auto keyword automatically deduce the type of elements in the vector v.
    for (auto &i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    // display the elements of the vector v1
    cout << "before copy vector v1: ";
    for (auto &i : v1)
    {
        cout << i << " ";
    }
    cout << endl;
    // copy the elements of v into v1
    //'back_inserter' function is used to insert the copied elements at the end of v1.
    copy(v.begin(), v.end(), back_inserter(v1));

    cout << "after copy vector v to v1: ";
    for (auto &i : v1)
    {
        cout << i << " ";
    }
    cout << endl;

    // add an element to the end of the vector
    v.push_back(60);
    cout << "After push_back(60): ";
    for (auto &i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    // remove the last element from the vector
    v.pop_back();
    cout << "After pop_back(): ";
    for (auto &i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    // insert an element at the beginning of the vector
    v.insert(v.begin(), 5);
    cout << "After insert(begin(), 5): ";
    for (auto &i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    // erase an element from the vector
    v.erase(v.begin() + 2);
    cout << "After erase(begin() + 2): ";
    for (auto &i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
