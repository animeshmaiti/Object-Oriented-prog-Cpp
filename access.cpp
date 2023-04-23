#include <iostream>
using namespace std;
class Sample{
    int size;
};
void display(int x,int y){
    int *p;
    x=0;
    p=&x;
    y=*p;
    *p=1;
    cout<<x<<","<<y;
}
int main(){
//     Sample S;
//     enum al1 {A,B,C};
//     enum al2 {C,D,E};
// int s=C;
    // S.size=10;
    // cout<<S.size<<endl;
// cout << s << endl;
display(1,1);
    return 0;
}