
#include <stdio.h>
#include<stdlib.h>
int i,j,temp;
void bubblesort(int arr[],int n){
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1;j++){ //for more optimise put j<n-i-1
            if(arr[j]>arr[j+1])
            {temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
           
        }}
    }
}
int main() {
    int arr[]={10,5,8,20,2,18};
    int n=sizeof(arr)/sizeof(arr[0]);
    bubblesort(arr,n);
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
