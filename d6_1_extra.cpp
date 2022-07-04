#include<bits/stdc++.h>
using namespace std;

// Create Node
class Node{
    public:
    int data;
    Node* next;
    Node(int value){
        data = value;
        next = NULL;
    }
};

// Function to insert node
void insert(Node* &head,int value){
    Node* n = new Node(value);
    if(head==NULL){
        head = n;
        return;
    }
    Node* temp = head;

    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;
}

// Function to display node
void display(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

Node* intersectionNode(Node* l1,Node* l2){
    if(l1==NULL || l2==NULL) return NULL;

    Node* a = l1;
    Node* b = l2;

    while(a!=b){
        a = a == NULL ? l2 : a->next;
        b = b == NULL ? l1 : b->next;
    }
    return a;
}


int main(){
    Node* head = NULL;
    insert(head,1);
    insert(head,3);
    insert(head,1);
    insert(head,2);
    insert(head,4);

    Node* l1 = head;
    head = head->next->next->next;
    Node* headSec = NULL;
    insert(headSec,3);
    Node* l2 = headSec;
    headSec->next = head;

    cout<<"List1: "; display(l1);
    cout<<endl;
    cout<<"List2: "; display(l2);
    cout<<endl;

    Node* answerNode = intersectionNode(l1,l2);
    if(answerNode == NULL )
    cout<<"No intersection\n";
    else
    cout<<"The intersection point is "<<answerNode->data<<endl;
    return 0;

}