#include<stdio.h>
int main(){ 
    int n;
    printf("Enter number of elements in list.");
    scanf("%d",&n);
    int arr[n],i,element,flag=0,index;
    for(i=0;i<n;i++){
        printf("Enter %d element of list..",i);
        scanf("%d",&arr[i]);
    }
    printf("Enter element to be searched.");
    scanf("%d",&element);
    for(i=0;i<n;i++){
        if(arr[i]==element)
        {
            flag=1;
            index=i;
        }
          
    }
    if (flag==1){
        printf("Element was found at %d index.",i);
    }
    else{
        printf("Element was not found..");
    }
    return 0;
    }