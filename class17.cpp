#include <iostream>
using namespace std;

void starPrint(int n,string choice){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<choice<<" ";
        }
        cout<<endl;
    }
}
void starPrintPt2(int n,string choice){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << choice << " ";
        }
        cout << endl;
    }
}
int main(){
    int n;
    string ch;
    cout<<"Enter the number of rows: ";
    cin>>n;
    cout<<"Enter the character: ";
    cin>>ch;
    starPrint(n,ch);
    cout<<endl;
    starPrintPt2(n,ch);
    return 0;
}