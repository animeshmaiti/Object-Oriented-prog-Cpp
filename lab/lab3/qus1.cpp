// Write a C++ program to calculate the GCD of two numbers using recursive functions. Use
// call-by address as a method of passing parameters to the function
#include <iostream>
using namespace std;
//animesh maiti 2130006
int gcd(int *a, int *b)
{
  if (*b == 0)
  {
    return *a;
  }
  else
  {
    int temp = *a % *b;
    return gcd(b, &temp);
  }
}

int main()
{
  cout<<"animesh maiti 2130006\n";
  int x, y;
  cout << "Enter two numbers: ";
  cin >> x >> y;
  cout << "The GCD of " << x << " and " << y << " is: " << gcd(&x, &y) << endl;
  return 0;
}
