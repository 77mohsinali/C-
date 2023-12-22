
#include <iostream>
#include<string>

using namespace std;

int main()
{
    
    int value1, value2, value3;
    string code;
    cout<<"Enter the code :"<<endl;
    cin>>code;
    
    if (code=="*725#"){
        cout<<"1. GB\n2. AJK"<<endl;
        cout<<"Enter Number :"<<endl;
        cin>>value1;
        
        switch(value1){
            case 1:
            cout<<"1. Call & SMS\n2. Internet\n3. Social"<<endl;
            cout<<"Enter Number :"<<endl;
            cin>>value2;
            switch(value2){
                case 1:// call and sms pakage
                cout<<"1. Rs 30/daily unlimited"<<endl;
                cout<<"2. Rs 500/monthly unlimited"<<endl;
                cout<<"Enter Number :"<<endl;
                cin>>value3;
                if (value3==1){
                    cout<<"Your Daily Pakage has been activated"<<endl;
                }else if(value3==2){
                    cout<<"Your Mothly pakage has been activated"<<endl;
                }else{
                    cout<<"Invalid Number"<<endl;
                }
                break;
                case 2://internet Pakages
                cout<<"1. Rs 100/daily unlimited"<<endl;
                cout<<"2. Rs 1000/monthly unlimited"<<endl;
                cout<<"Enter Number :"<<endl;
                cin>>value3;
                if(value3==1){
                    cout<<"Your daly pakage has been activated"<<endl;
                }else if(value3==2){
                    cout<<"your Monthly pakage has been activated"<<endl;
                }else{
                    cout<<"Invalid Number"<<endl;
                }
                break;
                case 3://social pakage
                cout<<"1. 50/daily unlimited"<<endl;
                if(value3==1){
                    cout<<"You daily pakage has been actiavted"<<endl;
                }else{
                    cout<<"Invalid Number"<<endl;
                }
                break;
                default:
                cout<<"Invalid Number"<<endl;
                break;
                
            }
            break;
            case 2:
            cout<<"Pakages for AJK are not available"<<endl;
            break;
            default:
            cout<<"Invalid Number"<<endl;
            break;
        
        }
    }else{
        cout<<"You  Have  Entered  Invalid  Number"<<endl;
    }







}
