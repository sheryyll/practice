// Count how many even numbers are in the array
#include<stdio.h>
#include<stdlib.h>

int countEvenNmbers(int arr[], int n){
    int even = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] % 2 == 0){
            even++;
        }
    }
    return even;
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

    int evenCount = countEvenNmbers(arr, n);
    printf("Number of even elements is: %d\n", evenCount);

    free(arr);
    
    return 0;
}