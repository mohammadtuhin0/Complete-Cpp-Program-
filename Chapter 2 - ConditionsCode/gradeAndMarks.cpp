#include <iostream>
using namespace std;
int main() {
    int marks;
    cout<<"Enter your marks: ";
    cin>>marks;

    if(81<=marks || marks>=100) {
        cout<<"Very good";
    }
    else if(61<= marks || marks >=80) {
        cout<<"Good";
    }
    else if(41<=marks || marks>=60) {
        cout<<"Average";
    }
    else if(marks <= 40) {
        cout<<"Fail";
    }
}