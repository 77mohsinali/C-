#include<iostream>
using namespace std;

int main(){
    
    int x =10;
    int y=20;
    
    int *num1=&x;
    int *num2=&y;
    
    cout<<"The address of x is :"<<num1<<endl;  //To display the address of integers
    cout<<"The address of y is :"<<num2<<endl;
    
    cout<<"The value stored in address of x is :"<<*num1<<endl;  //To didplay the value stored in the address
    cout<<"The value stored in address of y is :"<<*num2<<endl;
    
}
