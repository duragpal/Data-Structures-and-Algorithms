#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    int* arr;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    arr=(int *)malloc(n*sizeof(int));
    if (arr==NULL)
    printf("Memory allocation failed....");
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;  // Assigning values to the array
    }

    // Print the array elements
    printf("Array elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free the dynamically allocated memory
    free(arr);

    return 0;



}