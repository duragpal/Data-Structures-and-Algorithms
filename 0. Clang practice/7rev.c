#include<stdio.h>
int rev(int n){
    
if(n<10){
printf("%d",n);
}
else
{printf("%d",n%10);
rev(n/10);}
return 0;
}

int main(){
    int n;
    printf("Enter a no: ");
    scanf("%d",&n);
    printf("Rev of the number is: ");
    rev(n);
    
}