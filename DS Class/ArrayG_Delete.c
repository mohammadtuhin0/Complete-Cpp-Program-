#include <stdio.h>

int main(){
    int arr[] = {10, 20, 30, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int pos = 2;

    printf("Array before deletion :");
    for(int i=0; i<n; i++) {
        printf("%d", arr[i]);
    }

    // delete
    for(int i=pos; i<n-1; i++) {
        arr[i -1] = arr[i];
    }
    n--;

    printf("\nArray after deletion\n");
    for(int i=0; i<n; i++) {
        printf("%d", arr[i]);
    }

    return 0;
}