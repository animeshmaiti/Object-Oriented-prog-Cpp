// Write a program to display the word “Your Name” using
// pointer and also count the number of characters
#include <iostream>
using namespace std;

int main(){
    char *name = "Your Name";
    int count = 0;
    while(*name!='\0'){
        cout<<*name;
        name++;
        count++;
    }
    cout<<endl<<"Number of characters: "<<count<<endl;
    return 0;
}