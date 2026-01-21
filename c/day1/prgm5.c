// Count how many odd numbers are in the array
#include<stdio.h>
#include<stdlib.h>

int countOddNmbers(int arr[], int n){
    int odd = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] % 2 != 0){
            odd++;
        }
    }
    return odd;
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

    int oddCount = countOddNmbers(arr, n);
    printf("Number of odd elements is: %d\n", oddCount);

    free(arr);
    
    return 0;
}