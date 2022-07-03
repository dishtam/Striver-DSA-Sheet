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

node* mergeList(node* &head1,node* &head2){
    node* h1 = head1;
    node* h2 = head2;

    node* dummyNode = new node(-1);
    node* h3 = dummyNode;

    while(h1!=NULL &&  h2!=NULL){
        if(h1->data < h2->data){
            h3->next = h1;
            h1 = h1->next;
        }
        else{
            h3->next = h2;
            h2 = h2->next;
        }
        h3 = h3->next;
    }
    while(h1!=NULL){
        h3->next = h1;
        h1=h1->next;
        h3= h3->next;
    }
    while(h2!=NULL){
        h3->next = h2;
        h2=h2->next;
        h3= h3->next;
    }
    return dummyNode->next;
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

    node* ans = mergeList(head1,head2);
    display(ans);
}