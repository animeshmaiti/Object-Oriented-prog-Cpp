// Write a class that has an array of integers as data members and read(), display(), find_largest(),
// find_smallest(), sum(), and find_mean() as its member functions.
#include <iostream>
using namespace std;
// Class definition
class Array
{
private:
    int arr[50];
public:
    void read(int);
    void display(int);
    int find_largest(int);
    int find_smallest(int);
    int sum(int);
    float find_mean(int);
};
// read function definitions
void Array::read(int n)
{
    arr[n];
    cout << "Enter "<<n<<" integers: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}
// Display function
void Array::display(int n)
{
    arr[n];
    cout << "The array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
// find largest number
int Array::find_largest(int n)
{
    arr[n];
    int largest = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    return largest;
}
// find smallest number
int Array::find_smallest(int n)
{
    arr[n];
    int smallest = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }
    return smallest;
}
// find sum of 10 numbers
int Array::sum(int n)
{
    arr[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}
// find mean of 10 numbers
float Array::find_mean(int n)
{
    arr[n];
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    float f= static_cast<float>(n);
    return sum / f;
}
int main()
{
    int n;
    cout << "Enter the number of integers: ";
    cin >> n;
    Array a;
    a.read(n);
    a.display(n);
    cout << "The largest number is: " << a.find_largest(n) << endl;
    cout << "The smallest number is: " << a.find_smallest(n) << endl;
    cout << "The sum of the numbers is: " << a.sum(n) << endl;
    cout << "The mean of the numbers is: " << a.find_mean(n) << endl;
    return 0;
}