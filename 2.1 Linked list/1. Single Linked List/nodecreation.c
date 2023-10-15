// Online C compiler to run C program online
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>


 struct node{
    int data;
    struct node* next;
};
int main() {
    struct node *head=NULL;
     head=(struct node*)malloc(sizeof(struct node));
    head->data=45;
    head->next=NULL;
    struct node* temp1=(struct node*)malloc(sizeof(struct node));
    temp1->data=35;
    temp1->next=NULL;
    struct node* temp2= (struct node*)malloc(sizeof(struct node));
    temp2->data=25;
    temp2->next=NULL;
    head->next=temp1;
    temp1->next=temp2;
    
    struct node* ptr;
    ptr=head;
    while(ptr!=NULL){
    printf("%d ", ptr->data);
    ptr=ptr->next;}
    
    return 0;
}
