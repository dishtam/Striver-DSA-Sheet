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

// Function of detect loop in the linked list
bool detectLoop(Node* head){
    unordered_set<Node*> hashSet;

    while(head!=NULL){
        if(hashSet.find(head) != hashSet.end()) return true;
        hashSet.insert(head);
        head=head->next;
    }
    return false;
}

// Function to create cycle
void createCycle(Node* &head,int a,int b) {
    int cnta = 0,cntb = 0;
    Node* p1 = head;
    Node* p2 = head;
    while(cnta != a || cntb != b) {
        if(cnta != a) p1 = p1->next, ++cnta;
        if(cntb != b) p2 = p2->next, ++cntb;
    }
    p2->next = p1;
}


int main() {
    Node* head = NULL;
    insert(head,1);
    insert(head,2);
    insert(head,3);
    insert(head,4);
    createCycle(head,1,3);//creating cycle in the list
    if(detectLoop(head) == true)
    cout<<"Cycle detected\n";
    else
    cout<<"Cycle not detected\n";
    return 0;
}