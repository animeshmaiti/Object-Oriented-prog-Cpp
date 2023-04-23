#include <iostream>
#define PI 3.14
using namespace std;
void sum(int a,int b,int c){
    cout<<"sum of 3 number: "<<a+b+c<<endl;
}
void sum(int a,int b){
    cout<<"sum of 2 numbers: "<<a+b<<endl;
}
void volume(int a){
    cout<<"volume of qube:"<<a*a*a<<endl;
}
void volume(float h,float r){
    cout<<"volume of cylider: "<<PI*r*r*h<<endl;
}
void volume(int l,int w, int h){
    cout<<"volume of quboid: "<<l*w*h<<endl;
}
int main(){
    sum(23,56,67);
    sum(37,67);
    volume(33);
    volume(23,67);
    volume(45 ,67 ,88);
    return 0;
}
