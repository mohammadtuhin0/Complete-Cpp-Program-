#include <iostream>
using namespace std;
void usa() {
    cout<<"You are in USA"<<endl;
    return;
}
void banlgadesh() {
    cout<<"I am Bangladeshi"<<endl;
    usa();
}


int main() {
    banlgadesh();
}