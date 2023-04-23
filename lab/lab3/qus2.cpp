#include <iostream>
using namespace std;
//animesh 2130006
void search(int *array, int size, int value)
{
    int i,flag=0;
    for (i = 0; i < size; i++)
    {
        if (array[i] == value)
        {
            flag=i;
            cout << "found the value at index: "<<i<<endl;
        }   
    }
    if (array[flag]!=value)
    {
        cout<<"not found";
    }
}

int main()
{
    cout<<"animesh maiti 2130006\n";
    int n, value;
    int *array = new int[n];
    cout <<"enter the number of values:";
    cin>>n;
    cout <<"enter the "<<n<<" values:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    cout << "enter the value want to search:";
    cin >> value;
    search(array, n, value);
    return 0;
}
