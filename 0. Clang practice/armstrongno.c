#include<stdio.h>
#include<math.h>
int main(){
    int n,i,j,digit,digpow,sum=0,noofdigit=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    
    int temp=n;
    while(n!=0){
        n=n/10;
        noofdigit++;
    }
     n=temp;
    while(n!=0){
        digit=n%10;
        digpow=pow(digit,noofdigit);
        sum+=digpow;
        n=n/10;

    }
    if (temp==sum){
        printf("%d is Armstrong Number.",temp);
    }
    else{
        printf("%d is not Armstrong Number.",temp);
    }
    }