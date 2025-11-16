#include <iostream>
#include <string>
using namespace std;
class teacher {
private:
    double salary;
    string name;
    string dept;
    string subject;

public:

    // perameterized
    teacher(string name, string dept, string subject, double salary) {
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
    }
    // copy Constructor
    teacher(teacher &orgObj) {
        cout<<"I am custom copy constructor...\n";
        this-> name = orgObj.name;
        this-> dept = orgObj.dept;
        this-> subject = orgObj.subject;
        this-> salary = orgObj.salary;
    }

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

    teacher t2(t1);     // defaul copy construtor -invoked
    t2.getInfo();

    return 0;
}