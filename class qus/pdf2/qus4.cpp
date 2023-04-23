//  Write a program to display an array of given numbers from
//  1-9 using pointer
// Write a program to find out the mean using array &
// pointer.
#include <iostream>
using namespace std;
int mean(int *arr, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    cout << "Sum of array is: " << sum << endl;
    return sum / n;
}
int main()
{
    int *arr;
    for (int i = 1; i < 10; i++)
    {
        arr[i] = i;
    }
    cout << "Array is: " << endl;
    for (int i = 1; i < 10; i++)
    {
        cout << arr[i] << endl;
    }
    cout << "Mean of array is: " << mean(arr, 10) << endl;
    return 0;
}
