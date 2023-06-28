#include<stdio.h>
int printnew(int *x){
    
    *x=20;
 return *x;
}

int main(){
    int x=10;
    //printnew(&x);
    printf("Original Value of X: %d ",x);
    
   
}