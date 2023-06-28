#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *ptr;
    char c;
    ptr=fopen("abc.txt","w");
    if(ptr==NULL)
    {
        printf("Error ");
        exit(1);
    }
    printf("Enter any character.");
    scanf("%c",&c);
    fputc(c,ptr); 
    fclose(ptr);
    return 0;

}