#include<stdio.h>
int swap(int *a , int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    
}
int main(){
    int a,b,temp;
    printf("Enter value of a:");
    scanf("%d",&a);
    printf("Enter value of b:");
    scanf("%d",&b);
    swap(&a,&b);
    printf("value of a after swapping:%d",a);
    
    printf("value of b after swapping:%d",b);
    
return 0;
}
