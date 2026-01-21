// Check if the array is sorted (ascending)
#include<stdio.h>
#include<stdlib.h>

int isSorted(int arr[], int n){
    for(int i = 0; i < n - 1; i++){
        if(arr[i] > arr[i+1]){
            return 0;
        }
    }
    return 1;

}

int main(void){
    int n;

    printf("Enter array size: ");
    scanf("%d", &n);

    int *arr = malloc(n * sizeof(int));
    if(arr == NULL){
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int sorted = isSorted(arr, n);
    if(sorted){
        printf("Array is sorted in ascending order\n");
    } else {
        printf("Array is not sorted in ascending order\n");
    }

    free(arr);
    
    return 0;
}