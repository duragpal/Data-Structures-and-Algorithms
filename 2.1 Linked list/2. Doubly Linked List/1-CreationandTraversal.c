// Online C compiler to run C program online
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
typedef struct node{
    int data;
    struct node* next;
    struct node* prev;
} Node;


int main() {
    Node *head=NULL;
    head=(struct node*)malloc(sizeof(struct node));
    head->data=45;
    head->prev=NULL;
    head->next=(struct node*)malloc(sizeof(struct node));
    head->next->next=(struct node*)malloc(sizeof(struct node));
    head->next->data=35;
    head->next->prev=head;
    head->next->next->data=25;
    head->next->next->prev=head->next;
    head->next->next->next=NULL;
    
    struct node* ptr;
    ptr=head;
    while(ptr!=NULL){
    printf("%d ", ptr->data);
    ptr=ptr->next;
    }
    return 0;
}
