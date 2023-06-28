#include<stdio.h>
int main(){
    FILE *ptr;
    char c[100];
    ptr=fopen("abc.txt","r");
    while(1){
       
        if(fgets(c,10,ptr)==NULL)
        break;
        else
        printf("%s",c);
    }
    fclose(ptr);

}