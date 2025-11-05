#include <iostream>
using namespace std;
int permu(int permutaion){
    permutaion = 1;
    for(int i = 1; i<=permutaion; i++){
        permutaion *= i;
    }
    return permutaion;
}
int main(){
    int a;
    cout<<"Enter a : ";
    cin>>a;
    int b;
    cout<<"Enter b : ";
    cin>>b;

    int x = permu(a);
    int y = permu(b);
    int c = permu(a - b);
    cout<<a/b;
}