#include <stdio.h>
#include <stdlib.h>

int findMax(int arr[], int n){
    int max = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

int main(void){
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);

    if(n <= 0){
        printf("Invalid array size\n");
        return 1;
    }

    int *arr = malloc(n * sizeof(int));
    if(arr == NULL){
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf("\nMaximum element is: %d\n", findMax(arr, n));
    free(arr);

    return 0;
}
