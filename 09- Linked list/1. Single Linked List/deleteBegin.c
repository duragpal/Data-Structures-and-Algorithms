// Online C compiler to run C program online
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
typedef struct node{
    int data;
    struct node* next;
} Node;

// Node* insertBegin(Node* head,int x){
//     Node *ptr=(struct node*)malloc(sizeof(struct node));
//     ptr->data=x;
//     ptr->next=head;
//     return ptr;
    
// }
// Node* insertEnd(Node *head, int x){
//     Node*temp=(struct node*)malloc(sizeof(struct node));
//     temp->data=x;
//     if(head==NULL){
//         return temp;
//     }
//     Node * current=(struct node*)malloc(sizeof(struct node));
//     current=head;
//     while(current->next!=NULL){
//         current=current->next;
//     }
//     current->next=temp;
//     return head;
//     }
Node* DelHead(Node *head){
    if(head==NULL)
    return NULL;
    else{
        Node *temp=head->next;
        free(head);
        return temp;
    }
}



int main() {
    Node *head=NULL;
     head=(struct node*)malloc(sizeof(struct node));
    head->data=45;
    head->next=(struct node*)malloc(sizeof(struct node));
    head->next->next=(struct node*)malloc(sizeof(struct node));
    head->next->data=35;
    head->next->next->data=25;
    head->next->next->next=NULL;
    
    struct node* ptr;
    ptr=head;
    while(ptr!=NULL){
    printf("%d ", ptr->data);
    ptr=ptr->next;}
    ptr=DelHead(head);
    printf("\nAfter Deletion of head:\n ");
    while(ptr!=NULL){
    printf("%d ", ptr->data);
    ptr=ptr->next;}
    return 0;
}
