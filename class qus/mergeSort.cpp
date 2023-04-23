#include <iostream>
using namespace std;
void merge(int *arr, int lb, int mid, int ub)
{
    int i = lb, j = mid + 1, k = lb;
    int b[ub + 1];
    while (i <= mid && j <= ub)
    {
        if (arr[i] <= arr[j])
        {
            b[k] = arr[i];
            i++;
            k++;
        }
        else
        {
            b[k] = arr[j];
            j++, k++;
        }
    }
    if (i > mid)
    {
        while (j <= ub)
        {
            b[k] = arr[j];
            j++, k++;
        }
    }
    else
    {
        while (i <= mid)
        {
            b[k] = arr[i];
            i++, k++;
        }
    }
    for (int i = lb; i <= ub; i++)
    {
        arr[i] = b[i];
    }
}
void mergeShort(int *arr, int lb, int ub)
{
    int mid;
    if (lb < ub)
    {
        mid = (lb + ub) / 2;
        mergeShort(arr, lb, mid);
        mergeShort(arr, mid + 1, ub);
        merge(arr, lb, mid, ub);
    }
}
void display(int *arr,int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }
    
}
int main()
{
    // printf("animesh maiti 2130006\n");
    int n;
    cout<<"enter no. of elements";
    cin>>n;
    int *arr=new int[n];
    cout<<"enter the arr elements: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    mergeShort(arr,0,n-1);
    display(arr,n);
    return 0;
}