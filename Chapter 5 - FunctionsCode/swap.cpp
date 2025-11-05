#include <iostream>
using namespace std;
int main() {
    int x = 2;
    int y = 5;
    cout<<x<<" "<<y<<endl;
    
    // method = 1
    // int temp;
    // temp = x;
    // x = y;
    // y = temp;

    // method 2
    x = x + y;
    y = x - y;
    x = x - y;
    cout<<x<<" "<<y<<endl;
}