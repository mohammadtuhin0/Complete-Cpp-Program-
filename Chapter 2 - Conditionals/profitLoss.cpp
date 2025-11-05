#include <iostream>
using namespace std;
int main() {
    int sp, cp;
    cout<<"Enter cost price: ";
    cin>>sp;
    // cout<<endl;

    cout<<"Enter selling price :";
    cin>>cp;

    if(sp>cp) {
        cout<<"Profit is "<<sp-cp;
    }
    else if(cp<sp) {
        cout<<"Loss is "<<cp-sp;
    }
    else if (cp == sp)
    {
        cout<<"No Loss-Profit";
    }
    
}