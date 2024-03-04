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
// Node* DelHead(Node *head){
//     if(head==NULL)
//     return NULL;
//     else{
//         Node *temp=head->next;
//         free(head);
//         return temp;
//     }
// }
// Node* DelEnd(Node* head){
//     if(head==NULL)
//     return NULL;
//     if(head->next==NULL){
//         free(head);
//         return NULL;
//     }
//     Node* curr=head;
//     while(curr->next->next!=NULL){
//         curr=curr->next;
//     }
//     free(curr->next);
//     curr->next=NULL;
    
    
//     return head;
// }
Node *InsertAfterNode(Node* head,int x, int item){
    if (head==NULL)
    return NULL;
    Node * temp=(struct node*)malloc(sizeof(struct node));
    temp->data=item;
    temp->next=NULL;
    Node* ptr=head;
    Node* preptr=ptr;
    while(preptr->data!=x){
        preptr=ptr;
        ptr=ptr->next;
    }
    Node *temp2=preptr->next;
    preptr->next=temp;
    temp->next=ptr;
    
        
    
    
    
    return head;
    
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
    ptr=InsertAfterNode(head,35,96);
    printf("\n Insertion After a Node num: :\n");
    while(ptr!=NULL){
    printf("%d ", ptr->data);
    ptr=ptr->next;}
    return 0;
}
