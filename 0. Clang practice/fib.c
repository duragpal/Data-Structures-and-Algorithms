// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int t1=0,t2=1,nextterm;
   
    printf("%d,%d",t1,t2);
    for(int i=3;i<=10;i++){
    nextterm=t1+t2;
    t1=t2;
    t2=nextterm;
    printf(",%d",nextterm);}
    
    return 0;
}