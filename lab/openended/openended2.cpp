#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    // open output file
    // When we create an instance of ofstream, we can specify the name of the file we want to write to.
    // In this case, output_file is an instance of ofstream that is created to write to a file named 
    // "employee_details.csv" we are taking csv file because it will give a table form.
    ofstream output_file("employee_details.csv");

    // write headers to output file
    // Once we have an instance of ofstream,
    // we use the << operator to write strings and values to the output file.
    output_file << "Employee ID,Name,Age,Basic Salary,Gross Salary\n";

    // read details of 5 employees
    for (int i = 1; i <= 5; i++) {
        // read employee details
        int emp_id, age;
        string name;
        float basic_salary;
        cout << "Enter details for employee " << i << ":" << endl;
        cout << "Employee ID: ";
        cin >> emp_id;
        cout << "Name: ";
        cin.ignore(); // ignore newline character
        getline(cin, name);
        cout << "Age: ";
        cin >> age;
        cout << "Basic Salary: ";
        cin >> basic_salary;

        // calculate gross salary
        float da = 0.8 * basic_salary;
        float hra = 0.1 * basic_salary;
        float gross_salary = basic_salary + da + hra;

        // write employee details to output file
        output_file << emp_id << "," << name << "," << age << "," << basic_salary << "," << gross_salary << "\n";
    }
    // close output file
    output_file.close();
    cout << "Employee details written to file." << endl;

    // open input file.
    ifstream input_file("employee_details.csv");

    // read data from the file
    string line;
    while (getline(input_file, line)) {
        // do something with the line
        cout << line << endl;
    }

    // close the file
    input_file.close();
    return 0;
}
