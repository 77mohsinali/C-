#include <iostream>

using namespace std;
class operation{
    public:
    void sum(int a, int b)
    {
        cout<<"The sum is :"<<a+b<<endl;
    }
    void diff(int a, int b)
    {
        cout<<"The difference is :"<<a-b<<endl;
    }
    void prod(int a, int b)
    {
        cout<<"The product is :"<<a*b<<endl;
    }
    void divi(int a, int b)
    {
        cout<<"The division is :"<<a/b<<endl;
    }
};
int main(){
    
    operation addition;
    operation subtraction;
    operation multiplication;
    operation division;
    
   
    addition.sum(20, 20);
    subtraction.diff(20, 10);
    multiplication.prod(10, 10);
    division.divi(100, 10);
}

