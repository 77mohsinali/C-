#include<iostream>
using namespace std;

int main(){
    string player[3]={"Rizwan","Babar","Shadab" };
    string age[3]={"45","35","32"};
    string gender[3]={"M","M","M"};
    string score[3]={"2000","6000","1000"};
    
    int i=0;
    while(i<3){
        cout<<player[i]<<"\t"<<age[i]<<"\t"<<gender[i]<<"\t"<<score[i];
        cout<<endl;
        i++;
    }
    
    
    
}
