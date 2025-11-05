#include <iostream>
using namespace std;
int main(){
    int x = 3;
    cout<<&x<<endl;     // 0x61ff0c
    int y = 3;
    cout<<&y<<endl;     // 0x61ff08
}