
#include <iostream>
using namespace std;
int deletearr(int arr[],int n, int x){
    int i,j;
    for(i=0;i<n;i++){
        if(arr[i]==x)
        break;
    }
    // To return n is element is not present
    if(i==n)
    return n;
    for(j=i;j<n-1;j++)
    arr[j]=arr[j+1];
return (n-1);
    
}

int main() {
    int i;
   int arr[5]={1,2,3,4,5};
   int len=sizeof(arr)/sizeof(arr[0]);
   len = deletearr(arr,len,3); //Length changed.... to (n-1)
   for(i=0;i<len;i++){
       cout<<arr[i]<<" ";
   }

    return 0;
}