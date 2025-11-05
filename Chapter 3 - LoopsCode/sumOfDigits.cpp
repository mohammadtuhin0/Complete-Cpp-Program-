#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int sum = 0;
    while(n != 0) {
        int lastDigit = n % 10;
        n /= 10;
        sum += lastDigit;
    }
    cout<<sum;
}