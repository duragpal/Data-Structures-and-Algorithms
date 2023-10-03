
#include <stdio.h>

int main() {
    int i=0;;
  int arr[]={1,2,3,4,5,6};
  int n=sizeof(arr)/sizeof(arr[0]);
   printf("Original Array ");
   for(i=0;i<n;i++){
       printf("%d ",arr[i]);
   }
   if(arr==NULL || n==0){
       printf("Array is Empty.. underflow...");
   }
   else{
       int i=0;
       while(i<n-1)
       {
           arr[i]=arr[i+1];
           i=i+1;
       }
   }
   
   printf("\nDeletion at Beginning: ");
   for(i=0;i<n-1;i++){
       printf("%d ",arr[i]);
   }
    return 0;
}
