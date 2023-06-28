#include<stdio.h>
#include<string.h>
int main(){
    char c;
    printf("Enter a character: ");
    scanf("%c",&c);
   
    if(c=='a' ||c=='e' ||c=='i' ||c=='o' ||c=='u')
    printf("%c is a Vowel.",c);
    else if(c=='A' ||c=='E' ||c=='I' ||c=='O' ||c=='U' ||c=='u')
    printf("%c is a Vowel.",c);
    else
    printf("%c is a Consonant.",c);
    return 0;
}