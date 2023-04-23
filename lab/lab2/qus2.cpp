#include <iostream>
using namespace std;

void changeMinMax(int arr[], int n) {
    int min; int max;
    min = arr[0];
    max = arr[0];
    int minIndex,maxIndex;
    for (int i = 1; i < n; i++) {
        if (arr[i] < min)
            minIndex = i;
        if (arr[i] > max)
            maxIndex = i;
    }
    int temp=arr[minIndex];
    arr[minIndex]=arr[maxIndex];
    arr[maxIndex]=temp;
}

int main() {
    int arr[] = {5, 2, 13, 35, 65};
    int n = 5;
    cout<<"original array is:";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    changeMinMax(arr, n);
    cout << "\nAfter interchange the array is: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
