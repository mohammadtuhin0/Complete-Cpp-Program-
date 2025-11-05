#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter N number: ";
    cin>>n;

    if(n>99 && n<1000) {
        cout<<"3 Digit number";
    }
    else {
        cout<<"Not a 3 digit number ";
    }
}