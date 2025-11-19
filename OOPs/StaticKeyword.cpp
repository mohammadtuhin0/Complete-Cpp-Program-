#include <iostream>
#include <string>
using namespace std;

// void fun() {
//     static int x = 0;      // init statement - 1 run
//     cout<<"X : " <<x <<endl;
//     x++;
// }

class A {
public: 
    int x;

    void incX() {
        x = x +1;
    }
};
int main() {
    // fun();
    // fun();
    // fun();

    A obj1;
    A obj2;

    obj1.x = 100;
    obj2.x = 200;
    
    cout<< obj1.x <<endl;
    return 0;
}