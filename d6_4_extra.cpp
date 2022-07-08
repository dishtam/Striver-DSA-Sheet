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
        head  = n;
        return;
    }
    node* temp = head;
    while(temp->next!=NULL)
        temp=temp->next;
    temp->next = n;
}

node* reverselist(node* head){
    node* cur = head;
    node* prev = NULL;
    node* next;

    while(cur!=NULL){
        next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }
    return prev;
}

void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

bool isPalindrome(node* head){
    if(head==NULL || head->next==NULL)  return true;
    
    node* fast=head;
    node* slow=head;
    
    while(fast->next!=NULL && fast->next->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    // pointing reverse half list to the slow->next
     slow->next = reverselist(slow->next); 
     slow=slow->next;

     while(slow!=NULL){
        if(head->data!=slow->data)
            return false;
        head=head->next;
        slow=slow->next;
     }
     return true;

}

int main() {
    node* head = NULL;
    insert(head,1);
    insert(head,2);
    insert(head,3);
    insert(head,2);
    insert(head,1);

    display(head);

    cout<<isPalindrome(head);
}