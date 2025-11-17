#include <iostream>
#include <string>
using namespace std;

class person {
public:
    string name;
    int age;

    person(string name, int age) {
        this->name= name;
        this->age = age;
    }
    person() {
        cout<<"Parent constructor..\n";
    }
};

class Student : public person {
public: 
    int rollno;

    Student(string name, int age, int rollno) : person(name, age){
        this-> rollno = rollno;

    }

    void getInfo() {
        cout<< "Name : " << name << endl;
        cout<< "Age : " << age << endl;
        cout<< "rollno : " << rollno << endl;
    }

};
int main() {
    Student s1("Tuhin", 21, 52);
    // s1.name = "Mohammad Tuhin";
    // s1.age = 21;
    // s1.rollno = 25140052;

    s1.getInfo();
    return 0;
}