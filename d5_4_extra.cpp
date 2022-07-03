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

// Remove Nth node from end in one itteration O(n)
node* removeNthFromEnd(node* head,int n){
    node* temp = new node(0);
    node* fast = temp;
    node* slow = temp;
    temp->next = head;

    for(int i=1;i<=n;i++){
        fast = fast->next;
    }

    while(fast->next != NULL){
        fast = fast->next;
        slow = slow->next;
    }
    node* toDelete = slow->next;
    slow->next = slow->next->next;
    delete toDelete;

    return temp->next;
}

int main(){
    node* head = NULL;
    insert(head,1);
    insert(head,2);
    insert(head,3);
    insert(head,4);
    insert(head,5);

    display(head);

    node* ans = removeNthFromEnd(head,3);

    display(ans);
}