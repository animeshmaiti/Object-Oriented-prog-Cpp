#include <iostream>
using namespace std;
//animesh 2130006
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sortArray(int *array, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                swap(&array[j], &array[j + 1]);
            }
        }
    }
}

int main()
{
    cout<<"animesh maiti 2130006\n";
    int size;
    cout << "Enter the number of elements: ";
    cin >> size;

    int *array = new int[size];
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    sortArray(array, size);

    cout << "Sorted array: ";
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}
