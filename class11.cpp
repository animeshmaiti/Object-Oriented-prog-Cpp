#include <iostream>
using namespace std;
class student{
    int roll_no;
    int marks;
    public:
    student();
    student(int,int);
    void show_data(int);
};
student::student(){
    
}
student::student(int roll,int mark){
    roll_no=roll;
    marks=mark;
}
void student::show_data(int no){
    cout<<"student "<<no<<" roll no :"<<roll_no<<endl;
    cout<<"student "<<no<<" marks :"<<marks<<endl;
}

int main(){
    student S[50]={
        student(56,56),
        student(45,67),
        student(67,68)
    };
    S[0].show_data(0);
    S[1].show_data(1);
    S[2].show_data(2);
    return 0;
}