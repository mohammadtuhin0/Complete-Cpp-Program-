#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int rollno;
};

class Teacher {
public:
    string subject;
    double salary;
};

class TA : public Student, public Teacher {

};
int main() {
    TA t1;
    t1.name = "Tony Stark";
    t1.subject = "CS";
    t1.salary = 52222;

    cout<<"Name : " << t1.name << endl;
    cout<<"Subject: " << t1.subject << endl;
    cout<<t1.salary <<endl;
    return 0;
}