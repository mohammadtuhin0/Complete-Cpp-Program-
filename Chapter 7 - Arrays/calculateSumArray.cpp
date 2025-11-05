#include <iostream>
using namespace std;
int main(){
    int arr[] = {2,3,4,5,6,7,10};
    int n =sizeof(arr)/4;
    int sum = 0;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<endl;
        sum += arr[i];
    }
    cout<<"Sum of this array : "<<sum;
}