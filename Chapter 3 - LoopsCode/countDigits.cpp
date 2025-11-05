// Ques: Write a program to count digits of a given number.

#include <iostream>
using namespace std;
int main() {
    int n;
    int count = 0;
    cout<<"Enter numbers :";
    cin>>n;
    while(n!=0) {
        n = n/10;
        count++;
    }
    cout<<count;
}