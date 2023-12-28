
#include <stdio.h>
#include<stdlib.h>
int i,j,temp;
void selection_sort(int arr[],int n){
    for(i=0;i<n;i++){
        int min_index=i;
        for(j=i+1;j<n;j++){ 
            if(arr[j]<arr[min_index])
            { min_index=j;
                }
           }
           temp=arr[i];
            arr[i]=arr[min_index];
            arr[min_index]=temp; 
    }
}
int main() {
    int arr[]={10,5,8,20,2,18};
    int n=sizeof(arr)/sizeof(arr[0]);
    selection_sort(arr,n);
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
