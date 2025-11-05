#include <iostream>
using namespace std;
int main(){
    int arr[] = {5,3,6,2,1,7,9};
    int mini = arr[0];
    for(int i = 0; i<= 6; i++){
        if(arr[i] < mini){
            mini = arr[i];
        }
    }
    cout<<"Minimum Number of Array : "<<mini;
}