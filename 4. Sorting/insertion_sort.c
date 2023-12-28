
#include <stdio.h>
#include<stdlib.h>
int i,j,key;
void insertion_sort(int arr[],int n){
   for(i=1;i<n;i++){
       key=arr[i];
       j=i-1;
       
       while((j>=0&&arr[j])>key){
           arr[j+1]=arr[j];
           j=j-1;
       }
       arr[j+1]=key;
       
   }
}
int main() {
    int arr[]={10,5,8,20,2,18};
    int n=sizeof(arr)/sizeof(arr[0]);
    insertion_sort(arr,n);
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
