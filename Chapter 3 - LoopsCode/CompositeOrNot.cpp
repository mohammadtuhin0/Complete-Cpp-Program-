// Write a program to check if a number is composite or not.

#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter n: ";
    cin>>n;
    bool flag = true;   // true means prime.
    for(int i = 2; i<= n/2; i++) {
        if(n%i == 0 ) {
            flag = false;   // false means composite.
            // cout<<"Composite";
            break;
        }
    }
    if(n==1) cout<<"Neither prime nor composite";
    else if(flag == true) cout<<"Prime";
    else cout<<"Composite";
}