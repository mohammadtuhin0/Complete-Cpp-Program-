#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string s = "Tuhin";
    cout<<s<<endl;
    int n = s.length();
    reverse(s.begin(), s.end());
    cout<<s<<endl;
}