#include<stdio.h>
#include<stdlib.h>
int main(){
    int count =0;
    int n=13;
    while(n){
        if(n&1==1)
        count++;
        n=n>>1;
    
    
}
printf("%d",count);
return 0;
}