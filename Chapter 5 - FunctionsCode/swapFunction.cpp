#include <iostream>
using namespace std;
void swap(int& x, int& y){
    // int temp = x;
    // x = y; 
    // y = temp;

    // x = x + y;
    // y = x - y;
    // x = x- y;
}
int main(){
    int x = 12;
    int y = 54;
    cout<<x<<" "<<y<<endl;
    swap(x, y);
    cout<<x<<" "<<y<<endl;
}