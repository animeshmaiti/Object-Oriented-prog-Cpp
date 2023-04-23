#include <iostream>
#include<cmath>
using namespace std;

int main(){
    float y;
    for (float x =0.1; x <=1; x=x+0.1)
    {
        y=exp(-x);
        cout<<y<<endl;
    }
    
    return 0;
}