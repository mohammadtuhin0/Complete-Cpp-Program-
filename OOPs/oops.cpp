#include <iostream>
#include <string>
using namespace std;
class teacher {
private:
    double salary;

public:
    // properties
    string name;
    string dept;
    string subject;

    // methods
    void changeDept(string newDept) {
        dept = newDept;
    }

    void setSalary(double s) {
        salary = s;
    }
    double getSalary() {
        return salary;
    }
};
class students{
public:

};
int main(){
    teacher t1;
    t1.name = "Tuhin";
    t1.subject = "C++";
    t1.dept = "Computer Science";
    t1.setSalary(25000);

    cout<< t1.name <<endl;
    cout<<t1.getSalary()<<endl;
    return 0;
}