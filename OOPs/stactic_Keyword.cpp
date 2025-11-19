#include <iostream>
#include <string>
using namespace std;

class ABC {
public:
    ABC() {
        cout<< "Constructor\n";
    }
    ~ABC() {
        cout<< "destructor\n";
    }
};
int main() {
    if(true) {
       static ABC obj;
    }

    cout << "End of main fnx\n";
    return 0;
}