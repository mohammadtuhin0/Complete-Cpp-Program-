#include <iostream>
#include <string>
using namespace std;

class Parent{
public: 
    void getInfo() {
        cout<< "Parent class\n";
    }

    virtual void hello() {
        cout<< "Hello from par\n";
    }
};
class Child : public Parent {
public:
    void getInfo() {
        cout<<"Child class\n";
    }
    void hello() {
        cout<< "Hello from child\n";
    }
};
int main() {
    Child c1;
    // c1.getInfo();
    c1.hello();
    return 0;
}