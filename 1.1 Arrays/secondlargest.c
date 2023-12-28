
#include <stdio.h>

int main() {
    int arr[]={10,20,30,40,40,90,90,10};
    int i,n;
    n=sizeof(arr)/sizeof(arr[0]);
    int largest=arr[0];
    int seclarge=arr[1];
    for(i=1;i<n;i++){
        if(arr[i]>largest)
        largest=arr[i];
    }
    printf(" 1st Largest = %d",largest);
    for(i=0;i<n;i++){
        if(arr[i]!=largest){
            if(arr[i]>seclarge){
                seclarge=arr[i];
            }
        }
    }
    printf(" \n2nd Largest = %d",seclarge);
    return 0;
}
