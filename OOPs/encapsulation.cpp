#include <iostream>
#include <string>
using namespace std;
class Account {
private:
    double balance;
    string password;        // data hiding

public:
    string accountID;
    string username;

};
int main(){
    Account a1;
    a1.username = "Mohammad Tuhin";

    cout<< a1.username <<endl;
    return 0;
}