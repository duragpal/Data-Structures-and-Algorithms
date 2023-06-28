#include<stdio.h>
#include<math.h>
int main(){
    int n,original,digit,power,count=0,sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    original=n;
    while(n!=0){
        n=n/10;
        count++;
    }
    n=original;
    while(n!=0){
        digit=n%10;
        power=pow(digit,count);
        sum+=power;
        n=n/10;
        
    }
    if(original==sum)
    printf("The number is armstrong..");
    else
    printf("The number is not armstrong..");
    
    return 0;
}