#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cout<<"Enter 1st side :";
    cin>>a;
    cout<<"Enter 2nd side :";
    cin>>b;
    cout<<"Enter 3rd side :";
    cin>>c;

    if(a>b) {
            if(a>c) {
                cout<<a<<" is greatest";
            }
            else {
                cout<<c<<" is greatest";
            }
    }
    else {
        if(b>c) {
            cout<<b<<" is greatest";
        }
        else {
            cout<<c<<" is greatest";
        }
    }
}