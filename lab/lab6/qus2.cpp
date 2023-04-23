// Write a C++ program that calculates the commission of 5 salesperson. For every
// salesperson, a target is defined. If a salesperson sells products less than the target assigned,
// he gets no commission. If a salesperson completes the target, he/she gets a 10%
// commission on the extra sales made; if he/she sells beyond the target, he/she gets a 25%
// commission on extra sales. The program must record the sales of each month made by the
// salesman. The commission is calculated at the end of the year. Use class and constructor to
// design the program.

#include <iostream>
using namespace std;
class SalesMan
{
private:
    int target;
    int sales;
    int commission;
    string name;

public:
    SalesMan(int, int, string);
    void calculateCommission();
    void display();
};
SalesMan::SalesMan(int t, int s, string n)
{
    target = t;
    sales = s;
    name = n;
}
void SalesMan::display()
{
    cout << "Name: " << name << endl;
    cout << "Target: " << target << endl;
    cout << "Sales: " << sales << endl;
    cout << "Commission: " << commission << endl;
}
void SalesMan::calculateCommission()
{
    if (sales < target)
    {
        commission = 0;
    }
    else if (sales == target)
    {
        commission = sales * 0.1;
    }
    else
    {
        commission = (sales - target) * 0.25;
    }
}

int main()
{
    SalesMan s1(100, 200, "s1");
    s1.calculateCommission();
    s1.display();
    SalesMan s2(100, 100, "s2");
    s2.calculateCommission();
    s2.display();
    SalesMan s3(150, 100, "s3");
    s3.calculateCommission();
    s3.display();
    SalesMan s4(105, 200, "s4");
    s4.calculateCommission();
    s4.display();
    SalesMan s5(400, 200, "s5");
    s5.calculateCommission();
    s5.display();
    return 0;
}