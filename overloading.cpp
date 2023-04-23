#include <iostream>
using namespace std;
int sum(int a, int b){
    return a+b;
}
double sum(double a, double b){
    return a+b;
}
int main(){
    int sum1=sum(2,3);
    double sum2=sum(2.3,3.4);
    cout<<sum1<<endl;
    cout<<sum2<<endl;
    return 0;
}