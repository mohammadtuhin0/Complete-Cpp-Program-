/*
Ques: Write a program to create a calculator that performs basic 
arithmetic operations(add, subtract, multiply and divide) using switch case.
The calculator should input two numbers and an operator from user.
*/

#include <iostream>
using namespace std;
int main() {
    int a, b;
    cout<<"Enter 1st number: ";
    cin>>a;
    cout<<"Enter 2nd number :";
    cin>>b;
    char ch;
    cout<<"Enter operator :";
    cin>>ch;

    switch(ch) {
        case '+':
            cout<<a + b<<endl;
            break;
        case '-':
            cout<<a - b<<endl;
            break;
        case '*':
            cout<<a * b<<endl;
            break;
        case '/':
            cout<<a / b<<endl;
            break;
        default:
            cout<<"Invalid Operator";
    }
}