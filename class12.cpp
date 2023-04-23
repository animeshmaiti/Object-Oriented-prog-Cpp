#include <iostream>
using namespace std;
class Student{
    int roll_no;
    int marks;
    public:
    Student();
    Student(int,int);
    void get_data();
    void show_data();
};
Student::Student(int roll,int mark){
    roll_no=roll;
    marks=mark;
}
void Student::get_data(){
    cout<<"Enter roll_no and marks";
    cin>>roll_no>>marks;
}
void Student::show_data(){
    cout<<roll_no<<endl;
    cout<<marks<<endl;
}

int main(){
    Student S[50];
    int n;
    cout<<"Enter number of students";
    cin>>n;
    for(int i=0;i<n;i++){
        S[i].get_data();
    }
    for(int i=0;i<n;i++){
        S[i].show_data();
    }
    return 0;
}