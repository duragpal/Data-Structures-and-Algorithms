// Online C compiler to run C program online
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
typedef struct node{
    int data;
    struct node* next;
} Node;




int main() {
    Node *head=NULL;
    head=(struct node*)malloc(sizeof(struct node));
    head->data=45;
    
    head->next=(struct node*)malloc(sizeof(struct node));
    head->next->next=(struct node*)malloc(sizeof(struct node));
    head->next->data=35;
    
    head->next->next->data=25;
    
    head->next->next->next=head;
    
    struct node* ptr;
    ptr=head;
    do{
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }while(ptr!=head);
    // printf("\nAfter insertion at Beginning:\n ");
    // ptr=insertEnd(head,75);
    // while(ptr!=NULL){
    // printf("%d ", ptr->data);
    // ptr=ptr->next;
    // }
    return 0;
}
