#include <iostream>
using namespace std;
int main() {
    int x,y;
    cin>>x;
    cin>>y;
    for(int i=1; i<=x; i++){            // rows number
        for(int j=1; j<=y; j++) {       // coloums number
            cout<<"*";
        }
        cout<<endl;
    }

}