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

node*  addList(node* l1,node* l2){
    node* res = new node(0);

    int num1=0,num2=0;
    int n = 1;
    while(l1!=NULL){
        num1 = num1 + l1->data*n;
        n = n*10;
        l1=l1->next;
    }
    n=1;
    while(l2!=NULL){
        num2 = num2 + l2->data*n;
        n = n*10;
        l2=l2->next;
    }

    int sum = num1 + num2;

    while(sum!=0){
        insert(res,sum%10);
        sum=sum/10;
    }
    return res->next;
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