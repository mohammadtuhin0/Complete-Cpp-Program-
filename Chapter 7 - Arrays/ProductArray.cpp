#include <iostream>
using namespace std;
int main() {
    int arr[] = {3,2,4,5,6,7};
    int n = sizeof(arr)/ sizeof(arr[0]);
    int product = 1;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<endl;
        product *= arr[i];
    }
    cout<<"Product of Array : "<<product<<endl;
}