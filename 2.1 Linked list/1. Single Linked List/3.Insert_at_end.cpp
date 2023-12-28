#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int x)
    {
        data=x;
        next=NULL;
    }
};
Node* insertEnd(Node* head, int x){
    Node *temp=new Node(x);
    if(head==NULL)
    return temp;
    Node *curr=head;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->next=temp;
    return head;
    
}
void printList(Node *head){
if (head==NULL)
return;
cout<<head->data<<" ";
printList(head->next);
}


int main(){
    Node *head=new Node(20);
    head->next=new Node(30);
    head->next->next=new Node(40);
    printList(head);
    cout<<endl;
    insertEnd(head,90);
    printList(head);
    //printList(temp);
    return 0;
}