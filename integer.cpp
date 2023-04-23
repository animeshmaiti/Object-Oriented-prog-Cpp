#include <iostream>
using namespace std;
//1 byte=8 bits (sizeof always show in bytes)
int main(){
    unsigned short ushort_int=65535;
    /*it can store 0-(2^16-1)=65535
    when you put negative value it count reverse of highst limit(65535)
    mean if your value is -1 then print 65535 hence (65535-n+1)
    after cross the limit it reset to 0*/
    signed short singned_short=32767;
    /*it can print negative numbers and positive numbers from
    +2^(16-1)-1=+32767 to -2^(16-1)=-32,768
    there is 16-1 because 1 bit for sign as we learn in our digital electronics*/ 
    int a=2147483647;
    //-2^(32-1)=-2147483648 to +2^(32-1)-1= +2147483647 circular way
    // long int long_int=2147483647;//same as int
    long long int ll_int =9991654321;
    //-2^(64-1)=-9.22337204E18 to +2^(64-1)-1=+9.22337204E18-1(E18=10^18)
    // cout<<"size of short int "<<sizeof(short int)<<endl;
    cout<<"size of int "<<sizeof(int)<<endl;
    cout<<"size of long "<<sizeof(long)<<endl;
    cout<<"size of long int: "<<sizeof(long int)<<endl;
    cout<<"size of long long "<<sizeof(long long)<<endl;

    // cout<<"unsigned short int: "<<ushort_int<<endl;
    // cout<<"signed short int value "<<singned_short<<endl;
    // cout<<"long int: "<<long_int<<endl;
    cout<<"long long int: "<<ll_int<<endl;
    cout<<"a: "<<a<<endl;

    return 0;
}