#include <iostream>
using namespace std;
int main(){
    // Tuhin
    char arr[6] = {'T', 'u', 'h', 'i', 'n'};
    for(int i=0; i<5; i++){
        cout<<arr[i];
    }
    cout<<endl;
    string x = "My name is Tuhin";
    cout<<x<<endl;

    string name;
    cout<<"Enter your name: ";
    // cin>>name;
    getline(cin, name);         // (Mohammad Tuhin)
    cout<<"My name is : "<<name<<endl;
}