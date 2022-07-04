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

// Function to return intersection of node;
Node* intersectionOfList(Node* l1,Node* l2){
    while(l2!=NULL){
        Node* temp = l1;
        while(temp!=NULL){
            if(temp==l2) return l2;
            temp = temp->next;
        }
        l2 = l2->next;
    }
    return NULL;
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

    Node* answerNode = intersectionOfList(l1,l2);
    if(answerNode == NULL )
    cout<<"No intersection\n";
    else
    cout<<"The intersection point is "<<answerNode->data<<endl;
    return 0;

}