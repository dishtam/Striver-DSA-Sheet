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

Node* detectCycle(Node* head) {
    unordered_set<Node*> st;
    while(head != NULL) {
        if(st.find(head) != st.end()) return head;
        st.insert(head);
        head = head->next;
    }
    return NULL;
}


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
    
    Node* ans = detectCycle(head);

    cout<<ans->data;
}