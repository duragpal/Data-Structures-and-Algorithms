#include<stdio.h>
int main(){
    FILE *ptr;
    char c;
    ptr=fopen("abc.txt","r");
    while(1){
        c=fgetc(ptr);
        if(c==EOF)
        break;
        else
        printf("%c",c);
    }
    fclose(ptr);

}