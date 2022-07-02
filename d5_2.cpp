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
    
    while(temp->next != NULL)
        temp = temp->next;
    temp->next = n;
}

void displayList(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

node* middleNode(node* head){
    node* temp = head;
    int n=0;
    while(temp){
        n++;
        temp = temp->next;
    }
    temp = head;
    for(int i=0;i<n/2;i++){
        temp=temp->next;
    }
    return temp;
}


int main(){
    node* head = NULL;
    insertAtEnd(head,1);
    insertAtEnd(head,2);
    insertAtEnd(head,3);
    insertAtEnd(head,4);
    insertAtEnd(head,5);

    displayList(middleNode(head));
}