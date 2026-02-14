#include <stdio.h>

int main(){
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    int temp;

    printf("Array Before sorting: \n");
    for(int i =0; i<n; i++) {
        printf("%d", arr[i]);
        printf(" ");
    }
    for(int i = 0; i<n-1; i++) {
        for(int j=0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                // swep 
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("\nArray after sorting: \n");
    for(int i = 0; i < n; i++){
        printf("%d", arr[i]);
        printf(" ");
    }
    return 0;
}