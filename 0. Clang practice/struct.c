#include<stdio.h>
struct bookdetail{
    char name[20];
    char author[20];
    int price, nop;
};
int main(){ 
     struct bookdetail books[2];
        
    for(int i=0;i<5;i++){
        printf("Enter details of book No. %d : ",i);
        printf("\nEnter Book name: ");
        scanf("%s",&books[i].name);
        printf("\nEnter Book author name: ");
        scanf("%s",&books[i].author);
        printf("\nEnter Price: ");
        scanf("%d",&books[i].price);
        printf("\nEnter Book name: ");
        scanf("%d",&books[i].nop);
    }
    for(int i=0;i<5;i++){
        printf("Details of book No. %d  are : ",i);
        printf(" \nBook name: %s",books[i].name);
        printf(" \nBook Author name: %s",books[i].author);
        printf(" \nBook Price: %d",books[i].price);
        printf(" \nBook No of pages: %d",books[i].nop);
    }
    return 0;
}