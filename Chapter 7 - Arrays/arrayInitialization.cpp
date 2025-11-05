#include <iostream>
using namespace std;
int main(){
    int arr[5] = {4, 5, 2, 6, 3};
    
    for(int i=0; i<=4; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i = 4; i>=0; i--){
        cout<<arr[i]<<" ";
    }
}