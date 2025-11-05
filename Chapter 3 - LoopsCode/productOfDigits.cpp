// HW: Write a program to print product of digits of a given number.

#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter number :";
    cin>>n;
    int countPD = 1;
    while(n != 0) {
        int digit = n % 10;     // get last digit
        countPD *= digit;       // multiply with product
        n = n / 10;             // remove last digit
    }
    cout<<"Product of digits = " << countPD;
}