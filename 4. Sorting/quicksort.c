
#include <stdio.h>
#include<stdlib.h>
int i,j,key;
int partition(int arr[], int low, int high);
void quickSort(int arr[],int low,int high){
    int partitionIndex; //Index of pivot after partition
    
    if(low<high){
    partitionIndex=partition(arr,low,high);
    quickSort(arr,low,partitionIndex-1); //sort left subarray
    quickSort(arr,partitionIndex+1,high); //sort right subarray
}
}
int partition(int arr[],int low,int high){
    int pivot=arr[low];
    int i=low+1;
    int j=high;
    
    do{
    while(arr[i]<pivot){
        i++;
    }
    while(arr[j]>pivot){
        j--;
    }
    if(i<j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    }while(i<j);
    //Swap a[low ] and a[j]
    int temp=arr[low];
        arr[low]=arr[j];
        arr[j]=temp;
    return j;
    
    
}
int main() {
    int arr[]={10,5,8,20,2,18};
    int n=sizeof(arr)/sizeof(arr[0]);
    quickSort(arr,0,n-1);
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
