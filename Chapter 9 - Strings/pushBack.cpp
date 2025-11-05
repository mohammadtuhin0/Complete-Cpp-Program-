#include <iostream>
using namespace std;
int main(){
    string s = "Tuhin";
    cout<<s<<endl;
    
    s.push_back('x');
    cout<<s<<endl;

    s.pop_back();
    cout<<s<<endl;

    s.append(" Mohammad");
    cout<<s<<endl; 
}