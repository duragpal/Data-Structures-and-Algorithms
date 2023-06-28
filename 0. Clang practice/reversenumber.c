#include<stdio.h>
void rev(int n){

   if (n<10)
   {printf("%d",n);
   return;}
   else
    printf("%d",n%10);
    rev(n/10);
}
int main(){
int n=1234;
rev(n);
}