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
        temp= temp->next;
    }
    cout<<endl;
}

// Recursive way to merge two Linked List
node* mergeRecursive(node* &head1,node* &head2){
    if(head1==NULL)
        return head2;
    if(head2==NULL)
        return head1;

    node* result;
    if(head1->data < head2->data){
        result = head1;
        result->next=mergeRecursive(head1->next,head2);
    }else{
        result = head2;
        result->next=mergeRecursive(head1,head2->next);
    }
    return result;
}

int main(){
    node* head1 = NULL;
    node* head2 = NULL;
    //list 1
    insert(head1,1);
    insert(head1,2);
    insert(head1,5);
    insert(head1,8);
    insert(head1,10);
    //list 2
    insert(head2,3);
    insert(head2,7);
    insert(head2,10);

    node* ans = mergeRecursive(head1,head2);
    display(ans);
}