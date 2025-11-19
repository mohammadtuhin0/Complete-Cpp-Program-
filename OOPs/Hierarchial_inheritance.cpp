#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;
    int age;
};

class Student : public Person {
public:
    int rollno;
};

class Teacher : public Person {
public:
    string subject;
};

class TA : public Student, public Teacher {

};
int main() {
    TA t1;
    t1.Student::name = "Tony";
    t1.Teacher::subject = "CS";

    cout<< t1.Student::name<<endl;
    cout<< t1.Teacher::subject <<endl;
    return 0;
}