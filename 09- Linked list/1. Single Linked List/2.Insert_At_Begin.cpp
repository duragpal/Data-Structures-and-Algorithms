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
Node* insertBegin(Node* head, int x){
    Node *temp=new Node(x);
    temp->next=head;
    return temp;
    
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
    Node* temp=insertBegin(head,50);
    printList(temp);
    return 0;
}