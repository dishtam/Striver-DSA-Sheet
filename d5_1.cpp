#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int val){
        data = val;
        next = NULL;
    }
};

void insertAtEnd(node* &head,int val){
    node* n = new node(val);
    if(head==NULL){
        head = n;
        return;
    }
    node* temp = head;
    while(temp->next!=NULL)
        temp = temp->next;
    temp->next = n;
}

node* reverseLinkedList(node* &head){
    //step 1
    node* current_p = head;
    node* prev_p = NULL;
    node* next_p;
    // step 2
    while(current_p!=NULL){
        next_p = current_p->next;
        current_p->next = prev_p;
        prev_p = current_p;
        current_p = next_p;    
    }
    // step 3
    head=prev_p;
    return head;
}

void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    node* head = NULL;
    insertAtEnd(head,1);
    insertAtEnd(head,2);
    insertAtEnd(head,3);
    insertAtEnd(head,4);
    insertAtEnd(head,5);
    insertAtEnd(head,6);
    
    display(head);

    display(reverseLinkedList(head));

    
}