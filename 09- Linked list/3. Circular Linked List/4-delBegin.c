
#include <stdio.h>
#include<malloc.h>

typedef struct node{
    int data;
    struct node* next;
}Node;

// Node *insertBegin(Node* head,int data){
//     Node *temp=(struct node*)malloc(sizeof(struct node));
//     temp->data=data;
//     if (head==NULL){
//     temp->next = temp;
//         head=temp;
//     }
//     else{
//         temp->next=head->next;
//         head->next=temp;
//         int x= head->data;
//         head->data=temp->data;
//         temp->data=x;
        
//     }
//     return head;
// Node * insertEnd(Node * head, int data){
//     Node *temp=(struct node*)malloc(sizeof(struct node));
//     temp->data=data;
//     if(head==NULL)
//     {
//         temp->next=temp;
        
        
//     }
//     else{
//         temp->next=head->next;
//         head->next=temp;
//         int t=temp->data;
//         temp->data=head->data;
//         head->data=t;
        
//     }
//     return temp;
// }
Node *delBegin(Node * head)
{
    if (head==NULL)
    return NULL;
    Node *ptr=head;
    while(ptr->next!=head)
    {
        ptr=ptr->next;
    }
    ptr->next=head->next;
    free(head);
    head=ptr->next;
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
    head=delBegin(head);
    ptr=head;
printf("\nAfter Insertion.\n");
do{
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }while(ptr!=head);
    return 0;
}
