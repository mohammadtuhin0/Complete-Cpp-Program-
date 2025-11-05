#include <iostream>
using namespace std;
int main(){
    // int arr[] = {2,4,1,5,7,3};
    int arr[6];
    cout<<"Enter 6 number : ";
    for(int i = 0; i<6; i++){
        cin>>arr[i];
    }

    int max = arr[0];
    for(int i = 1; i<6; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    cout<<"Maximum Number of Array : "<<max;
}