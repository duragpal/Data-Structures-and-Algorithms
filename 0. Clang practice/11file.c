#include<stdio.h>
int main(){
    FILE *ptr;
    char c[100];
    ptr=fopen("abc.txt","w");
    
    
printf("Enter any string.");
    gets(c);
    puts(c);
    fputs(c,ptr);
    fclose(ptr);
    

    return 0;
}