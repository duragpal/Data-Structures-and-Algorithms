#include<stdio.h>

int main(){
    
int arr[5]={1,2,3,4,5};
int k =5,i,j,n;
n=sizeof(arr)/sizeof(arr[0]);
for(i=0;i<n;i++)
{if (arr[i]==k){
    printf("found at index: %d and position = %d",i,i+1);
    break;
}
    
}
    return 0;
}
