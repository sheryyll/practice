// Reverse the array
#include<stdio.h>
#include<stdlib.h>

void reverseArray(int arr[], int n){
    int start = 0, end = n - 1;

    while(start < end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
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

    reverseArray(arr, n);

    printf("Reversed array is:\n");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    free(arr);

    return 0;
}