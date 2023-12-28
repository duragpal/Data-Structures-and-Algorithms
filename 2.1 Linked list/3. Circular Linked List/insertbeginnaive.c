
#include <stdio.h>
#include<malloc.h>

typedef struct node{
    int data;
    struct node* next;
}Node;

Node *insertBegin(Node* head,int data){
    Node *temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    if (head==NULL){
    temp->next = temp;
        head=temp;
    }
    else{
        Node * curr=head;
        while(curr->next!=head)
        {
            curr=curr->next;
        }
        curr->next=temp;
        temp->next=head;
        head=temp;
    }
    return head;
    
    
}
int main()
{ 
    Node *head=(Node*)malloc(sizeof(Node));
    head->data=35;
    head->next=(Node*)malloc(sizeof(Node));
    head->next->data=96;
    head->next->next=(Node*)malloc(sizeof(Node));
    head->next->next->data=55;
    head->next->next->next=head;
    
    struct node* ptr;
    ptr=head;
    do{
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }while(ptr!=head);
    head=insertBegin(head,66);
    ptr=head;
printf("\nAfter Insertion.\n");
do{
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }while(ptr!=head);
    return 0;
}
