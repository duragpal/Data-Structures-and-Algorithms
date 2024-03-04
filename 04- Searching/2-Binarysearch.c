// Online C compiler to run C program online
#include<stdio.h>
int binarysearch(int arr[],int low,int high, int search){
while(low<=high){
    int mid=(low+high)/2;
    if(arr[mid]==search)
    return mid;
    
    else if(arr[mid]>search)
    high=mid-1;
    else{
        low=low+1;
    }}
return -1;    
}
int main(){
    
int arr[5]={1,2,3,4,5};
int n=sizeof(arr)/sizeof(arr[0]);
int low,high,mid,search=9;
int result = binarysearch(arr, 0,n-1, search);
(result==-1)?printf("Element not Present.."):printf("%d",result);
}
