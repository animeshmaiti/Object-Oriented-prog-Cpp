// Write a C++ program to add, subtract and multiply two matrices using the concepts of class
// and operator overloading
#include <iostream>
using namespace std;
class Matrix{
    int a[3][3];
    public:
    Matrix(){
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                a[i][j]=0;
            }
        }
    }
    Matrix(int b[3][3]){
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                a[i][j]=b[i][j];
            }
        }
    }
    Matrix operator+(Matrix m){
        Matrix temp;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                temp.a[i][j]=a[i][j]+m.a[i][j];
            }
        }
        return temp;
    }
    Matrix operator-(Matrix m){
        Matrix temp;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                temp.a[i][j]=a[i][j]-m.a[i][j];
            }
        }
        return temp;
    }
    Matrix operator*(Matrix m){
        Matrix temp;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                temp.a[i][j]=0;
                for(int k=0;k<3;k++){
                    temp.a[i][j]+=a[i][k]*m.a[k][j];
                }
            }
        }
        return temp;
    }
    void display(){
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }
};

int main(){
    
    return 0;
}