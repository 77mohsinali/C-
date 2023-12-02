#include <iostream>

using namespace std;

int main() {
    string name;
    cout << "Write your name: \n";
    cin >> name;  // to input the name
    float percentage;
    float mark1, mark2, mark3, mark4, mark5;
    cout << "Enter your Marks of 5 subjects (max : 100): "<<endl;
    cin >> mark1>>mark2>>mark3>>mark4>>mark5;
    float sum = mark1+mark2+mark3+mark4+mark5;
    cout << "You have scored: " << sum << endl;
    percentage = (sum/5);
    cout<<"Your percentage is: "<< percentage << endl;
    
    //if statement and else if statement

    if (percentage > 40 && percentage <= 50) {
        cout << "You have secured D grade" << endl;
    } else if (percentage >= 50 && percentage <= 60) {
        cout << "You have secured C grade" << endl;
    } else if (percentage >= 60 && percentage <= 70) {
        cout << "You have secured B grade" << endl;
    } else if (percentage >= 70 && percentage <= 80) {
        cout << "You have secured A grade" << endl;
    } else if (percentage >= 80 && percentage <= 100) {
        cout << "You have secured A+ grade" << endl;
    } else if (percentage >= 0 && percentage <= 50) {
        cout << "Sorry " << endl;
    }

    return 0;
}
