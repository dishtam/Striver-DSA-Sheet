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

void deleteHead(node* &head){
    node* toDelete = head;
    head = head->next;
    delete toDelete;
}

    node* removeNthFromEnd(node* head, int n) {
        int count=0;
        node* temp = head;
        while(temp!=NULL){
            temp=temp->next;
            count++;
        }
        temp = head;
        int value = count-n-1;
        
        if(n==count){
            deleteHead(head);
            return head;
        }
        
        while(value){
            temp = temp->next;
            value--;
        }
        temp->next = temp->next->next;
        return head;
    }

    int main(){
        node* head = NULL;
        insert(head,1);
        insert(head,2);
        insert(head,3);
        insert(head,4);
        insert(head,5);

        display(head);

        node* ans = removeNthFromEnd(head,5);

        display(ans);
    }