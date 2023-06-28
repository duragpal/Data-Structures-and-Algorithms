#include<stdio.h>
#include<string.h>
struct bookdetail{
    int price,nop;
};
int main(){
    
    
    struct bookdetail  book;
    book.price=60;
    book.nop=70;
    printf("%d",book.price);
    printf("%d",book.nop);
    return 0;
}