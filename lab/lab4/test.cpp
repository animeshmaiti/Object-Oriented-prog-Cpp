#include <iostream>
using namespace std;
enum shape{a,s,d,f,g};
enum Fruit { APPLE, BANANA, ORANGE };
int main(){
    // shape s;
    // cout<<s;
    Fruit fruit = APPLE;

char fruitChar = static_cast<char>(fruit + 'APPLE');
cout<<fruitChar;

    return 0;
}
Fruit fruit = APPLE;

char fruitChar = static_cast<char>(fruit + 'A');
