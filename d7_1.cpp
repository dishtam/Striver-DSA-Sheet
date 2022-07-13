#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = NULL;
    }
};

void insert(Node* &head,int val){
    Node* newNode = new Node(val);
    if(head==NULL){
        head=newNode;
        return;
    }
    Node* temp  = head;

    while(temp->next!=NULL)
        temp = temp->next;
    
    temp->next=newNode;
}

void display(Node* head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head = head->next;
    }
    cout<<"NULL"<<endl;
}

Node* rotateListByk(Node* &head,int k){
    if(head==NULL || head->next==NULL)  return head;
    int count = 1;
    Node* t = head;
    while(t->next!=NULL){
        count++;
        t=t->next;
    }

    for(int i=1;i<=k%count;i++){
        Node* temp = head;
        while(temp->next->next!=NULL){
            temp = temp->next;
        }
        
        Node* end = temp->next;
        temp->next = NULL;
        end->next = head;
        head = end; 
    }
    return head;
}

int main(){
    Node* head = NULL;
    insert(head,1);
    insert(head,2);
    insert(head,3);
    insert(head,4);
    display(head);

    rotateListByk(head,4); // we observe that for every value of k for which it is a multiple of length of the list we get back the original list

    display(head);
}