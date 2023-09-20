
#include <iostream>
using namespace std;
int insert(int arr[],int n, int x, int cap, int pos){
    int i;
    if(n==cap)
    return n;
    int index = pos-1;
    for(i=n-1;i>=index;i--)
    arr[i+1]=arr[i];
    arr[index]=x;
    return (n+1);
}

int main() {
    int i;
   int arr[5]={1,2,3,4,5};
   int len=sizeof(arr)/sizeof(arr[0]);
   insert(arr,len,10,10,5);
   for(i=0;i<len;i++){
       cout<<arr[i]<<" ";
   }

    return 0;
}