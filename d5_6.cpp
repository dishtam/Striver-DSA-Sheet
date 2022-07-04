#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;
    }
};

void insert(node* &head,int val){
    node* n = new node(val);
    if(head==NULL){
        head = n;
        return;
    }
    node* temp = head;
    while(temp->next != NULL){
        temp  = temp->next;
    }
    temp->next = n;
}

void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

// If the specific location of the node is given, then we use this to delete the node
void deleteNode(node* toDelete){
    node* temp = toDelete;
    temp->data = temp->next->data;
    node* n = temp->next;
    temp->next = temp->next->next;
    delete n;
}


int main(){
    node* l1 = NULL;

    insert(l1,2);
    insert(l1,4);
    insert(l1,3);
    insert(l1,5);
    insert(l1,6);
    
    display(l1);
    deleteNode(l1->next->next);
    display(l1);
}