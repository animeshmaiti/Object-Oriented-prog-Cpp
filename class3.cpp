#include <iostream>
using namespace std;

int main(){
    int *ptr;
    *ptr=12;
    int x=sizeof(ptr);
    cout<<x;
    cout<<ptr;
    cout<<*ptr;
    return 0;
}