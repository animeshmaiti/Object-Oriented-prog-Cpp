#include <iostream>
using namespace std;

class Sales
{
private:
    string n;
    int sales;
    int target;
    float commision;

public:
    Sales()
    {
        n = "";
        sales = 0;
        target = 0;
        commision = 0;
    }
    Sales(string name, int s, int t)
    {
        n = name;
        sales = s;
        target = t;
        if (sales < target)
            commision = 0;
        else if (sales == target)

            commision = 0.1 * sales;
        else if (sales > target)
            commision = 0.25 * (sales - target);
    }
    void display()
    {
        cout << " Name: " << n << endl;
        cout << " Sales: " << sales << endl;
        cout << " Target: " << target << endl;
        if (commision != 0)
            cout << " Commision: " << commision << endl;
        else
            cout << " No Commision" << endl;
    }
};

int main()
{
    cout << " Enter the number of sales person: ";
    int n;
    cin >> n;
    string name;
    int sales, i;
    int target;
    for (i = 1; i <= n; i++)
    {
        cout << " Enter the name of the sales person no." << i << " : ";
        cin >> name;
        cout << " Enter the target sales: ";
        cin >> target;
        cout << " Enter the sales: ";
        cin >> sales;
        Sales s(name, sales, target);
        s.display();
    }
    return 0;
}
