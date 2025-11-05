#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string s = "Tuhinx";
    cout<<s<<endl;
    int n = s.length();
    reverse(s.begin(), s.begin()+n/2);


    // int i = 0;
    // int j = n/2 -1;
    // while(i<j){
    //     char temp = s[i];
    //     s[i] = s[j];
    //     s[j] = temp;
    //     i++;
    //     j--;
    // }
    cout<<s<<endl;
}