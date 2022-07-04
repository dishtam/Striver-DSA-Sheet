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

node* addList(node* l1,node* l2){
    node* dummy = new node(0);
    node* temp = dummy;

    int carry =0;

    while(l1!=NULL || l2!=NULL || carry){
        int sum =0;
        if(l1!=NULL ){
            sum = sum + l1->data;
            l1 = l1->next;
        }        
        if(l2!=NULL){
            sum = sum + l2->data;
            l2 = l2->next;
        }

        sum = sum + carry;

        carry = sum/10;

        node* newNode = new node(sum%10);
        temp->next = newNode;
        temp = temp->next;
    }
    return dummy->next;
}


int main(){
    node* l1 = NULL;
    node* l2 = NULL;

    insert(l1,2);
    insert(l1,4);
    insert(l1,3);

    insert(l2,5);
    insert(l2,6);
    insert(l2,4);
    
    node* ans = addList(l1,l2);
    display(ans);
}