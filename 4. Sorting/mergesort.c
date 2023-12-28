
#include <stdio.h>
#include<stdlib.h>
int i,j,key;
void merge(int arr[],int mid,int low,int high){
    int i,j,k, B[100];
    i=low;
    j=mid+1;
    k=low;
    while(i<=mid&&j<=high){
        if(arr[i]<=arr[j]){
            B[k]=arr[i];
            i++;k++;
        }
        else{
            B[k]=arr[j];
            j++,k++;
        }
    }
    while(i<=mid){
        B[k]=arr[i];
        k++;i++;
    }
    while(j<=high){
        B[k]=arr[j];
        k++;j++;
    }
    for(int i=low;i<=high;i++){
        arr[i]=B[i];
    }
}

void mergeSort(int arr[],int low,int high){
    int mid;
    if(low!=high){
        mid=(low+high)/2;
        mergeSort(arr,low,mid);
        mergeSort(arr,mid+1,high);
        merge(arr,mid,low,high);
    }
}
int main() {
    int arr[]={10,5,8,20,2,18};
    int n=sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr,0,n-1);
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
