#include<stdio.h>
int fact(int n){
    if(n==1||n==0){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("Factorial of number is: %d",fact(num));
   
    return 0;
}

