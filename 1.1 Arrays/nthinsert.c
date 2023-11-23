#include <stdio.h>

int insertion(int arr[], int n, int item, int capacity,int pos){
    if(n==capacity)
    return n;
    int index=pos-1;
    for(int i=n-1; i>=index;i--){
        arr[i+1]=arr[i];
    }
    arr[index]=item;
    return (n+1);
    
}


int main() {
    int i=0;;
  int arr[]={1,2,3,4,5,6};
  int n=sizeof(arr)/sizeof(arr[0]);
   printf("Original Array ");
   for(i=0;i<n;i++){
       printf("%d ",arr[i]);
   }
   n=insertion(arr,n,25,100,4);
   printf("\n: After insertion ");
   for(i=0;i<n;i++){
       printf("%d ",arr[i]);
   }
    return 0;
}
