#include <iostream>
#include <string>
using namespace std;
class teacher {
private:
    double salary;

public:
    // non perameterized
    // teacher() {
    //     dept = "Computer Science and Engineerning";
    // }

    // perameterized
    teacher(string name, string dept, string subject, double salary) {
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
    }

    // properties
    string name;
    string dept;
    string subject;

    // methods
    void changeDept(string newDept) {
        dept = newDept;
    }

    void getInfo() {
        cout<< "name : "<< name <<endl;
        cout<< "subject : " << subject <<endl;
    }
};

int main(){
    teacher t1("Tuhin", "Computer Science", "C++", 25000);
    t1.getInfo();

    return 0;
}