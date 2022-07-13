// The code is not completed !!

#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* random;

    Node(int val){
        data = val;
        next = NULL;
        random = NULL;
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

Node* copyRandomList(Node* head){
    unordered_map<Node*,Node*> randomList;

    Node* temp = head;

    while(temp->next != NULL){
        Node*  randomNode = temp;
        //randomList[temp] = randomNode;

        // Making a copy of the nodes of the linked list and storing it in a linked list
        randomList.insert({temp,randomNode});
        temp = temp->next;
    }

    temp = head;

    while(temp->next!=NULL){
        Node* next_ptr = temp->next;
        Node* random_ptr = temp->random;

        randomList[temp]->next = next_ptr;
        randomList[temp]->random = random_ptr;

        temp = temp->next;
    }
    return randomList[head];
}

int main(){
    Node* head = NULL;
    insert(head,1);
    insert(head,2);
    insert(head,3);
    insert(head,4);
    

}